#include "App.hpp"

App::App() : window(sf::VideoMode(WIN_SIZE_X, WIN_SIZE_Y), "RPG-Master"), view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(WIN_SIZE_X, WIN_SIZE_Y)), p1(new HitBox(WIN_SIZE_X / 2, WIN_SIZE_Y / 2), nullptr, "../resources/textures/richter-belmont-no-animation.png") {
}

App::~App() {
    
}

void App::initWindow() {
    // this->window.create(sf::VideoMode(WIN_SIZE_X, WIN_SIZE_Y), "RPG-Master");
    // this->view.setSize(sf::Vector2f(WIN_SIZE_X, WIN_SIZE_Y));
    this->view.setCenter(sf::Vector2f(WIN_SIZE_X / 2, WIN_SIZE_Y / 2));
    this->mapRender.initMapRender(this->view);
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
    this->mapRender.updateTiles(this->view);
}

void App::render() {
    this->mapRender.render(this->window, this->view);

    this->window.display();
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