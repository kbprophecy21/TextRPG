#include <iostream>
#include "player.h"
#include "enemy.h"
#include "utils.h"


using namespace std;

/// @brief 
/// @return 
int main() {
    // Initialize the game
    Player player = createPlayer();
    showIntro();
    
    while (player.health > 0) {
       enterRoom(player);
       // gameloop here.
    };

    cout << "Game Over! You have been defeated,\n" << player.name << "!\n";
    cout << "Thanks for playing!\n";

    return 0;
}