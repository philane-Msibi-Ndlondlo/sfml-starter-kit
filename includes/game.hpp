/*
 * NAME: Game 
 * DESC: Enitity that build and renders game components
 * AUTHOR: Philane Msibi
 * DATE: 13 Auguest 2022
 */

#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <string>
#include "window.hpp"


class Game {

    private:
        Window* window;
        sf::Event event;
        
    public:

        Game(std::string title, unsigned int width, unsigned int height);

        void reg_events();

        bool isRunning();

        void update();

        void display();

        ~Game();
};

#endif
