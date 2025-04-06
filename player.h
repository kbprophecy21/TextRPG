#pragma once
#include <string>

using namespace std;

struct Player {
    string name;
    int health;
    int attack;
    int defense;
    int gold;

};

Player createPlayer();
void displayStats(const Player& player);