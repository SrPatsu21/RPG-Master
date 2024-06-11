#include "App.hpp"

App::App() : window(sf::VideoMode(WIN_SIZE_X, WIN_SIZE_Y), "RPG-Master"), view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(WIN_SIZE_X, WIN_SIZE_Y)), p1(new HitBox(WIN_SIZE_X / 2, WIN_SIZE_Y / 2), "./src/resources/textures/player.png") {
    this->world->initWorld(&this->p1);
}

App::~App() {
    delete (this->world);
}

void App::initWindow() {
    // this->window.create(sf::VideoMode(WIN_SIZE_X, WIN_SIZE_Y), "RPG-Master");
    // this->view.setSize(sf::Vector2f(WIN_SIZE_X, WIN_SIZE_Y));
    this->view.setCenter(sf::Vector2f(WIN_SIZE_X / 2, WIN_SIZE_Y / 2));
    this->mapRender.initMapRender(this->view);
    this->p1.setSpriteSize(P1_SPRITE_SIZE_X, P1_SPRITE_SIZE_Y);
    this->p1.setSpritePos((WIN_SIZE_X / 2) - (P1_SPRITE_SIZE_X / 2), (WIN_SIZE_Y / 2) - (P1_SPRITE_SIZE_Y / 2));
    this->p1.setPosition((WIN_SIZE_X / 2) - (P1_SPRITE_SIZE_X / 2), (WIN_SIZE_Y / 2) - (P1_SPRITE_SIZE_Y / 2));
}

void App::processEvents() {
    sf::Event event;
    while (this->window.pollEvent(event)) {
        switch (event.type) {
            case sf::Event::KeyPressed:
                this->p1.handleInput(event.key.code, true);
                break;

            case sf::Event::KeyReleased:
                this->p1.handleInput(event.key.code, false);
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
    this->p1.updateSprite(deltaTime);
    // std::cout << "player pos - x " << this->p1.getPosition()->getX() << " - y " << this->p1.getPosition()->getY() << std::endl;
    // std::cout << "player sprite pos - x " << this->p1.getSprite().getPosition().x << " - y " << this->p1.getSprite().getPosition().y << std::endl;
}

void App::render() {
    this->window.clear();
    this->view.setCenter(this->p1.getSprite().getPosition().x, this->p1.getSprite().getPosition().y);
    this->window.setView(this->view);
    this->mapRender.render(this->window, this->view);
    this->p1.draw(&this->window);

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