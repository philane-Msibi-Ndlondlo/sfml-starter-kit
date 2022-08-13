/*
 * NAME: Window
 * DESC: Enitity that defines the stucture of a Game Window
 * AUTHOR: Philane Msibi
 * DATE: 13 Auguest 2022
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>
#include <string>

class Window {

    private:
        sf::RenderWindow* window;
        sf::VideoMode videoMode;
        std::string title;
        unsigned int w_width;
        unsigned int w_height;
        
    public:

        Window(std::string title, unsigned int width, unsigned int height);

        void setTitle(std::string title);

        std::string getTitle();

        bool isOpen();

        bool  pollEvents(sf::Event& event);

        void clear();

        void close();

        void display();

        ~Window();
};

#endif
