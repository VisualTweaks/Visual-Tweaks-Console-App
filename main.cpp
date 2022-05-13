// Language: cpp
// Path: main.cpp
/*
This Program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

* @brief Main function
* @return 0
*/

#include <iostream>
#include <chrono>
#include <thread>
#include <string.h>
#include "Func\console.cpp"

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

int main()
{
    string command;
    consoleprint("Welcome to Visual Tweaks.", "System");
    consoleprint("V1.0", "System");
    consoleprint("Type 'help' for a list of commands.", "System");
    while (true)
    {
        cout << "> ";
        cin >> command;
        CommandHandler(command);
    }
}