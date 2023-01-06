#pragma once
class Metin2Bot
{
public:
    static const SHORT key_space = 32; //VkKeyScan(' ');
    static const SHORT key_0 = 0x30;
    static const SHORT key_1 = 0x31;
    static const SHORT key_2 = 0x32;
    static const SHORT key_horse = key_2; //!!!
    static const SHORT key_3 = 0x33;
    static const SHORT key_4 = 0x34;
    static const SHORT key_f1 = VK_F1;
    static const SHORT key_f2 = VK_F2;
    static const SHORT key_f3 = VK_F3;
    static const SHORT key_f4 = VK_F4;

    int botID;
    static int botCounter;
    Metin2Bot();
    static void PressKey(SHORT key);
    static void ReleaseKey(SHORT key);
    static void KeyStroke(SHORT key, int dur = 50);
    static void ToggleHorse(int dur = 100);
    
};

extern "C" __declspec(dllexport) void* csharp_Metin2Bot()
{
    return (void*) new Metin2Bot();
}

