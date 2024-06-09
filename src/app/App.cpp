#include "App.hpp"

App::App() {
}

App::~App() {
}

void App::initWindow() {
    this->window.create(sf::VideoMode(WIN_SIZE_X, WIN_SIZE_Y), "RPG-Master");
}

void App::processEvents() {
    sf::Event event;
    while (this->window.pollEvent(event)) {
        switch (event.type) {
            case sf::Event::KeyPressed:
                std::cout << "key pressed: " << event.key.code << std::endl;
                break;

            case sf::Event::KeyReleased:
                std::cout << "key released: " << event.key.code << std::endl;
                break;

            case sf::Event::Closed:
                this->window.close();
                break;

            default:
                break;
        }
    }
}

void App::update(sf::Time deltaTime) {
}

void App::render() {
}

void App::cleanup() {
}

void App::run() {
    this->initWindow();

    sf::Clock clk;
    while (this->window.isOpen()) {
        sf::Time deltaTime = clk.restart();
        this->processEvents();
        this->update(deltaTime);
        this->render();
    }

    this->cleanup();
}