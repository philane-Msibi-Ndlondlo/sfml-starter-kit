#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "../includes/game.hpp"

/*
 *  @FUNC: Window
 *  @DESC: Window constructor - Initializes game window
 *  @PARAMS
 *      - string title - Title of the game window 
 *      - int width  - width of the game window 
 *      - int height - height of the game window 
 *  @RETURN: void
 *
 */

Game::Game(std::string title,unsigned int width,unsigned int height) {
    
    this->title = title;
    this->w_width = width;
    this->w_height = height;

    this->videoMode.width = width;
    this->videoMode.height = height;

    this->window = new sf::RenderWindow(this->videoMode, this->title);
    this->player = new sf::CircleShape(200.f);
    this->player->setFillColor(sf::Color::Green);
}

/*
 *  @FUNC: setTitle
 *  @DESC: Setter func for the window title
 *  @PARAMS
 *      - string title - Title of the game window 
 *  @RETURN: void
 *
 */

void Game::setTitle(std::string title) {
     this->title = title;
}

/*
 *  @FUNC: getTitle
 *  @DESC: Getter func for the window title
 *  @PARAMS
 *      - void 
 *  @RETURN: string - Title of the game window
 *
 */

std::string Game::getTitle() {
     return this->title;
}

/*
 *  @FUNC:isOpen 
 *  @DESC: Check if Game Window is running/open
 *  @PARAMS
 *      - void 
 *  @RETURN: bool - Game Window is runnnig or not 
 *
 */

bool Game::isRunning() {
     return this->window->isOpen(); 
}


/*
 *  @FUNC: pollEvent 
 *  @DESC: Detect keyboard events
 *  @PARAMS
 *      - sf::Event event - Event object 
 *  @RETURN: void 
 *
 */


bool Game::reg_events() {
    return this->window->pollEvent(this->event);
}

/*
 *  @FUNC: clear 
 *  @DESC: Clear the game window for scene updates
 *  @PARAMS
 *      - void 
 *  @RETURN: void 
 *
 */

void Game::clear() {
     this->window->clear();
}


/*
 *  @FUNC: close 
 *  @DESC: Close the game window
 *  @PARAMS
 *      - void 
 *  @RETURN: void 
 *
 */

void Game::close() {
     this->window->close();
}

/*
 *  @FUNC: draw 
 *  @DESC: Draw shape to the game window
 *  @PARAMS
 *      - void 
 *  @RETURN: void 
 *
 */

void Game::draw() {

     this->window->draw((*this->player));
}

/*
 *  @FUNC: display 
 *  @DESC: Renders updates to the scene
 *  @PARAMS
 *      - void 
 *  @RETURN: void 
 *
 */

void Game::display() {
     this->window->clear();
     this->draw();
     this->window->display();
}

/*
 *  @FUNC: ~Game 
 *  @DESC: Free up memory
 *  @PARAMS
 *      - void 
 *  @RETURN: void 
 *
 */

Game::~Game() {
     delete this->window;
     this->window = nullptr;
}

