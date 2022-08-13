#include <SFML/Graphics.hpp>
#include <string>
#include "../includes/game.hpp"

/*
 *  @FUNC: Game
 *  @DESC: Game constructor - Initializes game
 *  @PARAMS
 *      - string title - Title of the game window 
 *      - int width  - width of the game window 
 *      - int height - height of the game window 
 *  @RETURN: void
 *
 */

Game::Game(std::string title,unsigned int width,unsigned int height) {
    this->window = new Window(title, width, height);
}

void Game::reg_events() {

    while (this->window->pollEvents(this->event)) {

         if (this->event.type == sf::Event::Closed) {
             this->window->close();
         }
    }
}


/*
 *  @FUNC: update
 *  @DESC: Implements game window or screen updates
 *  @PARAMS
 *      - void 
 *  @RETURN: void
 *
 */

void Game::update() {
     this->window->clear();

     this->window->display();
}

/*
 *  @FUNC:isRunning 
 *  @DESC: Check if Game is running
 *  @PARAMS
 *      - void 
 *  @RETURN: bool - Game is runnnig 
 *
 */

bool Game::isRunning() {
     return this->window->isOpen(); 
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

