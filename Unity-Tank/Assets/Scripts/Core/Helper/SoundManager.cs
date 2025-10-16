using ET;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    [StaticField]
    public static SoundManager Instance;

    private AudioSource musicSource;   // for background music
    private AudioSource sfxSource;     // for sound effects

    [Header("UI Sounds")]
    public AudioClip buttonClickSound;

    [Header("Gameplay Sounds")]
    public AudioClip shootSound;
    public AudioClip explosionSound;
    public AudioClip gameWinSound;
    public AudioClip gameLoseSound;
    public AudioClip itemPickupSound;

    [Header("Background Music")]
    public AudioClip backgroundMusic;

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);

            // Create separate audio sources
            musicSource = gameObject.AddComponent<AudioSource>();
            sfxSource = gameObject.AddComponent<AudioSource>();

            // Music setup
            musicSource.loop = true;
            musicSource.playOnAwake = false;
            musicSource.volume = 0.5f;

            // SFX setup
            sfxSource.playOnAwake = false;

            // Start music
            if (backgroundMusic != null)
            {
                PlayMusic(backgroundMusic);
            }
        }
        else
        {
            Destroy(gameObject);
        }
    }

    // --- Music ---
    private void PlayMusic(AudioClip clip)
    {
        if (clip != null)
        {
            musicSource.clip = clip;
            musicSource.Play();
            // Debug.LogWarning("Play background music");
        }
    }

    public void StopMusic()
    {
        musicSource.Stop();
    }

    public void SetMusicVolume(float volume)
    {
        musicSource.volume = volume;
    }

    // --- SFX ---
    private void PlaySFX(AudioClip clip)
    {
        if (clip != null)
            sfxSource.PlayOneShot(clip);
    }

    public void SetSFXVolume(float volume)
    {
        sfxSource.volume = volume;
    }

    public void PlayButtonClick()
    {
        PlaySFX(buttonClickSound);
    }

    public void PlayShoot()
    {
        PlaySFX(shootSound);
    }

    public void PlayExplosion()
    {
        PlaySFX(explosionSound);
    }

    public void PlayGameEnd(bool isWin)
    {
        if (isWin)
        {
            PlaySFX(gameWinSound);
        }
        else
        {
            PlaySFX(gameLoseSound);
        }
    }

    public void PlayItemPickUp()
    {
        PlaySFX(itemPickupSound);
    }
}
