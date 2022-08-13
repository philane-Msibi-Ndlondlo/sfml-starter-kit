/*
 * NAME: Game
 * DESC: Enitity that defines the stucture of a Game Window
 * AUTHOR: Philane Msibi
 * DATE: 13 Auguest 2022
 */

#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <string>

class Game {

    private:
        sf::RenderWindow* window;
        sf::VideoMode videoMode;
        std::string title;
        unsigned int w_width;
        unsigned int w_height;
        sf::Event event;
        sf::CircleShape* player;
        
    public:

        Game(std::string title, unsigned int width, unsigned int height);

        void setTitle(std::string title);

        std::string getTitle();

        bool isRunning();

        bool  reg_events();

        void clear();

        void draw();

        void close();

        void display();

        ~Game();
};

#endif
