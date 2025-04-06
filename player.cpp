#include <iostream>
#include "player.h"


using namespace std;

Player createPlayer() {
    Player p;
    cout << "Enter your name: ";
    cin >> p.name;
    p.health = 100;
    p.attack = 25;
    p.defense = 20;
    p.gold = 0;


    return p;

};

void displayStats(const Player& p) {
    cout << "\n-- Player Stats --\n";
    cout << "Name: " << p.name << "\nHealth: " << p.health << "\nAttack: " << p.attack << "\nDefense: " << p.defense << "\nGold: " << p.gold << "\n";

};





