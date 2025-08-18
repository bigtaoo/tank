using ET;
using System;
using System.IO;
using System.Text;
using UnityEngine;

public static class LightObfuscation
{
    // Keep this secret and non-trivial; you can generate random bytes once and hardcode them.
    [StaticField]
    private static readonly byte[] Key = Encoding.UTF8.GetBytes("a7VZ\x13\x99\x02_ObfuSkaterKey!\x7F-tao-wang-is-super-great!!!");

    public static void SaveJson(string fileName, string json)
    {
        var bytes = Encoding.UTF8.GetBytes(json);
        for (int i = 0; i < bytes.Length; i++)
        {
            bytes[i] ^= Key[i % Key.Length];                // XOR
        }

        string b64 = Convert.ToBase64String(bytes);         // Base64 for file-friendliness
        var path = Path.Combine(Application.persistentDataPath, fileName);
        File.WriteAllText(path, b64);
        Debug.Log($"Saved (obfuscated) → {path}");
    }

    public static string LoadJson(string fileName)
    {
        var path = Path.Combine(Application.persistentDataPath, fileName);
        if (!File.Exists(path))
        {
            return null;
        }

        var b64 = File.ReadAllText(path);
        var bytes = Convert.FromBase64String(b64);
        for (int i = 0; i < bytes.Length; i++)
        {
            bytes[i] ^= Key[i % Key.Length];
        }

        return Encoding.UTF8.GetString(bytes);
    }
}
