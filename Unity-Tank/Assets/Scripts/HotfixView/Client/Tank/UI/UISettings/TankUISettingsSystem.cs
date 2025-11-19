using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
    [EntitySystemOf(typeof(TankUISettingsComponent))]
    [FriendOf(typeof(TankUISettingsComponent))]
    public static partial class TankUISettingsSystem
    {
        [EntitySystem]
        private static void Awake(this TankUISettingsComponent self)
        {
            ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
            self.Back = rc.Get<GameObject>("Back");
            self.Back.GetComponent<Button>().onClick.AddListener(() => { self.BackToGameModeUI().Coroutine(); });

            self.MusicVolume = rc.Get<GameObject>("MusicValue");
            self.MusicVolume.GetComponent<Slider>().onValueChanged.AddListener(value => { self.SetMusicVolume(value); });

            self.SoundVolume = rc.Get<GameObject>("SoundValue");
            self.SoundVolume.GetComponent<Slider>().onValueChanged.AddListener(value => { self.SetSoundVolume(value); });

            self.JoyStickerTraditionalCheck = rc.Get<GameObject>("TraditionalCheck");
            self.JoyStickerTraditionalCheck.GetComponent<Toggle>().onValueChanged.AddListener(value => { self.SetJoySticker(TankJoyStickerType.Traditonal, value); });

            self.JoyStickerButtonsCheck = rc.Get<GameObject>("ButtonsCheck");
            self.JoyStickerButtonsCheck.GetComponent<Toggle>().onValueChanged.AddListener(value => { self.SetJoySticker(TankJoyStickerType.Buttons, value); });

            self.InitializeSavedSettings();
        }

        private static void InitializeSavedSettings(this TankUISettingsComponent self)
        {
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            self.MusicVolume.GetComponent<Slider>().value = savedFileComponent.UserInfo.MusicVolume / 1000.0f;
            self.SoundVolume.GetComponent<Slider>().value = savedFileComponent.UserInfo.SoundVolume / 1000.0f;

            if (savedFileComponent.UserInfo.JoyStickerType == TankJoyStickerType.Buttons)
            {
                self.JoyStickerButtonsCheck.GetComponent<Toggle>().isOn = true;
                self.JoyStickerButtonsCheck.GetComponent<Toggle>().interactable = false;
                self.JoyStickerTraditionalCheck.GetComponent<Toggle>().isOn = false;
                self.JoyStickerTraditionalCheck.GetComponent<Toggle>().interactable = true;
            }
            else
            {
                self.JoyStickerButtonsCheck.GetComponent<Toggle>().isOn = false;
                self.JoyStickerButtonsCheck.GetComponent<Toggle>().interactable = true;
                self.JoyStickerTraditionalCheck.GetComponent<Toggle>().isOn = true;
                self.JoyStickerTraditionalCheck.GetComponent<Toggle>().interactable = false;
            }
        }

        private static async ETTask BackToGameModeUI(this TankUISettingsComponent self)
        {
            SoundManager.Instance.PlayButtonClick();

            var scene = self.Root();
            await UIHelper.Create(scene, UIType.TankUIGameMode, UILayer.Mid);
            await UIHelper.Remove(scene, UIType.TankUISettings);
        }

        private static void SetMusicVolume(this TankUISettingsComponent self, float volume)
        {
            SoundManager.Instance.SetMusicVolume(volume);

            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            savedFileComponent.UserInfo.MusicVolume = (int)(volume * 1000);
            savedFileComponent.SaveTankConfigResult();
        }

        private static void SetSoundVolume(this TankUISettingsComponent self, float volume)
        {
            SoundManager.Instance.SetSFXVolume(volume);

            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            savedFileComponent.UserInfo.SoundVolume = (int)(volume * 1000);
            savedFileComponent.SaveTankConfigResult();
        }

        private static void SetJoySticker(this TankUISettingsComponent self, TankJoyStickerType joyStickerType, bool value)
        {
            var savedFileComponent = self.Root().GetComponent<TankClientSavedFileComponent>();
            if (savedFileComponent.UserInfo.JoyStickerType == joyStickerType || !value)
            {
                return;
            }

            if (joyStickerType == TankJoyStickerType.Buttons)
            {
                self.JoyStickerButtonsCheck.GetComponent<Toggle>().isOn = true;
                self.JoyStickerButtonsCheck.GetComponent<Toggle>().interactable = false;
                self.JoyStickerTraditionalCheck.GetComponent<Toggle>().isOn = false;
                self.JoyStickerTraditionalCheck.GetComponent<Toggle>().interactable = true;
            }
            else
            {
                self.JoyStickerButtonsCheck.GetComponent<Toggle>().isOn = false;
                self.JoyStickerButtonsCheck.GetComponent<Toggle>().interactable = true;
                self.JoyStickerTraditionalCheck.GetComponent<Toggle>().isOn = true;
                self.JoyStickerTraditionalCheck.GetComponent<Toggle>().interactable = false;
            }
         
            savedFileComponent.UserInfo.JoyStickerType = joyStickerType;
            savedFileComponent.SaveTankConfigResult();
        }
    }
}
