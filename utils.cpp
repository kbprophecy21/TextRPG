#include "utils.h"
#include <iostream>
#include "player.h"

using namespace std;

void showIntro()
{
    cout << "Welcome to the Text RPG!\n";
    cout << "You are a brave adventurer on a quest to find treasure.\n";
    cout << "Your journey begins now!\n";
};

void enterRoom(Player &player)
{
    cout << "You have entered a mysterious room....\n";
    displayStats(player);
    cout << "Nothing happens...this time.\n";
};
