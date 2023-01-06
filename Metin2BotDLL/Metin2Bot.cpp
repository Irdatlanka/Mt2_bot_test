#include "pch.h"
#include "Metin2Bot.h"
#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

int Metin2Bot::botCounter = 0;
Metin2Bot::Metin2Bot()
{
    botCounter++;
    botID = botCounter + 1;
}
void Metin2Bot::PressKey(SHORT key)
{
    UINT mappedkey = MapVirtualKey(LOBYTE(key), 0);
    INPUT in;
    ZeroMemory(&in, sizeof(in));
    in.type = INPUT_KEYBOARD;
    in.ki.wVk = 0;
    in.ki.wScan = mappedkey;
    in.ki.dwFlags = 0 | KEYEVENTF_SCANCODE; //keydown=0
    in.ki.time = 0;
    SendInput(1, &in, sizeof(INPUT));
}
void Metin2Bot::ReleaseKey(SHORT key)
{
    UINT mappedkey = MapVirtualKey(LOBYTE(key), 0);
    INPUT in;
    ZeroMemory(&in, sizeof(in));
    in.type = INPUT_KEYBOARD;
    in.ki.wVk = 0;
    in.ki.wScan = mappedkey;
    in.ki.dwFlags = KEYEVENTF_KEYUP | KEYEVENTF_SCANCODE;
    in.ki.time = 0;
    SendInput(1, &in, sizeof(INPUT));
}
void Metin2Bot::KeyStroke(SHORT key, int dur)
{
    PressKey(key);
    Sleep(dur);
    ReleaseKey(key);
}

void Metin2Bot::ToggleHorse(int dur)
{
    KeyStroke(key_horse);
    Sleep(dur);
}

