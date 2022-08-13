#include <SFML/Graphics.hpp>
#include <string>
#include "../includes/window.hpp"

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

Window::Window(std::string title,unsigned int width,unsigned int height) {
    this->title = title;
    this->w_width = width;
    this->w_height = height;

    this->videoMode.width = width;
    this->videoMode.height = height;

    this->window = new sf::RenderWindow(this->videoMode, this->title);
}

/*
 *  @FUNC: setTitle
 *  @DESC: Setter func for the window title
 *  @PARAMS
 *      - string title - Title of the game window 
 *  @RETURN: void
 *
 */

void Window::setTitle(std::string title) {
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

std::string Window::getTitle() {
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

bool Window::isOpen() {
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


bool Window::pollEvents(sf::Event& event) {
    return this->window->pollEvent(event);
}

/*
 *  @FUNC: clear 
 *  @DESC: Clear the game window for scene updates
 *  @PARAMS
 *      - void 
 *  @RETURN: void 
 *
 */

void Window::clear() {
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

void Window::close() {
     this->window->close();
}

/*
 *  @FUNC: display 
 *  @DESC: Renders updates to the scene
 *  @PARAMS
 *      - void 
 *  @RETURN: void 
 *
 */

void Window::display() {
     this->window->display();
}

/*
 *  @FUNC: ~Window 
 *  @DESC: Free up memory
 *  @PARAMS
 *      - void 
 *  @RETURN: void 
 *
 */

Window::~Window() {
     delete this->window;
     this->window = nullptr;
}

