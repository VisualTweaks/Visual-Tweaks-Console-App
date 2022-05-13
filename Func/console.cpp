#include <string.h>
#include <iostream>


using namespace std;



void consoleprint(string message, string category)
{
    cout << category << ": " << message << endl;
}


void CommandHandler(string commandName)
{
    if (commandName == "help" || commandName == "Help")
    {
        consoleprint("help | exit | version | discord | github | team", "System");
    }
    else if (commandName == "exit" || commandName == "Exit")
    {
        consoleprint("Exiting...", "System");
        exit(0);
    }
    else if (commandName == "version" || commandName == "Version")
    {
        consoleprint("Version 1.0", "System");
    }
    else if (commandName == "discord" || commandName == "Discord")
    {
        consoleprint("https://discord.gg/nGQT4VUP2C", "System");
    }
    else if (commandName == "github" || commandName == "Github")
    {
        consoleprint("https://github.com/VisualTweaks", "System");
    }
    else if (commandName == "team" || commandName == "Team")
    {
        consoleprint("Team:", "System");
        consoleprint("- OWNERS: Kumiko | Azlo | DRQ | Codex-ops | jubuntu | Mr. Shark Spam Bot", "System");
        consoleprint("- Visual Tweaks", "System");
    }
    else
    {
        consoleprint("Command not found.", "System");
    }
}