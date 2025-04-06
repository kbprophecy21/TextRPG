#include <iostream>
#include <thread>
#include <chrono>
#include "player.h"
#include "enemy.h"
#include "utils.h"

using namespace std;

int main() {
    // Initialize the game
    Player player = createPlayer();
    showIntro();
    this_thread::sleep_for(chrono::seconds(2)); // Pause after intro

    while (player.health > 0) {
        enterRoom(player);
        this_thread::sleep_for(chrono::seconds(2)); // Pause between rooms
    }

    cout << "Game Over! You have been defeated, " << player.name << "!\n";
    this_thread::sleep_for(chrono::seconds(2)); // Pause before final message
    cout << "Thanks for playing!\n";

    return 0;
}