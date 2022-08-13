#include <iostream>
#include <SFML/Graphics.hpp>

#include "includes/game.hpp"

int main() {

    Game* game = new Game("Gamer", 400, 600);
    
    /*while(game->isRunning()) {

        game->reg_events();
    
        game->clear();
        game->display();
    }*/
    std::cout << "Hello" << std::endl;
    return 0;
}

