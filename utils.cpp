#include "utils.h"
#include <iostream>
#include <thread>
#include <chrono>
#include "player.h"

using namespace std;

void showIntro()
{
    cout << "Welcome to the Text RPG!\n";
    cout << "You are a brave adventurer on a quest to find treasure.\n";
    cout << "Your journey begins now!\n";
    this_thread::sleep_for(chrono::seconds(2)); // Pause after intro text
}

void enterRoom(Player &player)
{
    cout << "You have entered a mysterious room....\n";
    this_thread::sleep_for(chrono::seconds(1)); // Pause for suspense
    displayStats(player);
    player.health -= 10; // Simulate taking damage
    cout << "You took 10 damage!\n";
    this_thread::sleep_for(chrono::seconds(1)); // Pause after damage
    displayStats(player);
}
