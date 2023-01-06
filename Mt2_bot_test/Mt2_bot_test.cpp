// Mt2_bot_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string.h>
#include "Metin2Bot.h"

using namespace std;


int main()
{
    Sleep(2000);

    while (1)
    {
        if (GetAsyncKeyState(VK_TAB))
            return 0;
        
        //lovon kezd
        //skillek aktivalasa
        cout << "Skillek aktivalasa..." << endl;
        Metin2Bot::ToggleHorse();
        Metin2Bot::KeyStroke(Metin2Bot::key_f1);
        Metin2Bot::ToggleHorse();
        Metin2Bot::ToggleHorse();
        Metin2Bot::KeyStroke(Metin2Bot::key_f2);
        Metin2Bot::ToggleHorse();
        Metin2Bot::ToggleHorse();
        Metin2Bot::KeyStroke(Metin2Bot::key_f3);
        Metin2Bot::ToggleHorse();
        //
        Metin2Bot::PressKey(Metin2Bot::key_space);
        for (int i = 0; i < 120; i++)
        {
            if (GetAsyncKeyState(VK_TAB))
                return 0;
            Metin2Bot::KeyStroke(Metin2Bot::key_0);
            if (i % 20 == 0)
                Metin2Bot::KeyStroke(Metin2Bot::key_3);
            if (i % 10 == 0)
                Metin2Bot::KeyStroke(Metin2Bot::key_1);
            Sleep(1000);
        }
        Metin2Bot::ReleaseKey(Metin2Bot::key_space);

        Sleep(1000);

        
        
        //---------------WORKING EXAMPLE-----------------------------------
        /*
        SHORT key = VkKeyScan(' ');
        UINT mappedkey = MapVirtualKey(LOBYTE(key), 0);

        in[0].type = INPUT_KEYBOARD;
        in[0].ki.wVk = 0;
        in[0].ki.dwFlags = 0 | KEYEVENTF_SCANCODE; //KEYDOWN=0U
        in[0].ki.time = 0;
        //in[0].ki.dwExtraInfo = 0UL;
        in[0].ki.wScan = mappedkey; //m=50,
        SendInput(1, &in[0], sizeof(INPUT));
        Sleep(2000);
        in[1].type = INPUT_KEYBOARD;
        in[1].ki.wVk = 0;
        in[1].ki.dwFlags = KEYEVENTF_KEYUP | KEYEVENTF_SCANCODE; //KEYDOWN=0U
        in[1].ki.time = 0;
        //in[1].ki.dwExtraInfo = 0UL;
        in[1].ki.wScan = mappedkey; 
        SendInput(1, &in[1], sizeof(INPUT));
        Sleep(1000);
        */

        //nOT WORKIN' in Metin2
        /*
        in[0].type = INPUT_KEYBOARD;
        in[0].ki.wVk = 0x4d;
        in[0].ki.dwFlags = KEYEVENTF_EXTENDEDKEY; //KEYDOWN=0U
        in[0].ki.time = 0;
        in[0].ki.dwExtraInfo = 0UL;
        //in[0].ki.wScan = 50; //m
        SendInput(1, &in[0], sizeof(INPUT));
        Sleep(500);
        in[1].type = INPUT_KEYBOARD;
        in[1].ki.wVk = 0x4d;
        in[1].ki.dwFlags = KEYEVENTF_KEYUP; //KEYDOWN=0U
        in[1].ki.time = 0;
        in[1].ki.dwExtraInfo = 0UL;
        //in[1].ki.wScan = 50; //m
        SendInput(1, &in[1], sizeof(INPUT));
        Sleep(1000);
        */

    }





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
