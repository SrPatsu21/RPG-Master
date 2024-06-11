#include "CharacterRender.hpp"

CharacterRender::CharacterRender(std::string path) : AbstractRender(path) {
    this->mUp = false;
    this->mDown = false;
    this->mLeft = false;
    this->mRight = false;
}

CharacterRender::~CharacterRender() {
}

void CharacterRender::handleInput(sf::Keyboard::Key k, bool state) {
    switch (k) {
        case sf::Keyboard::W:
            this->mUp = state;
            break;
        case sf::Keyboard::S:
            this->mDown = state;
            break;
        case sf::Keyboard::D:
            this->mRight = state;
            break;
        case sf::Keyboard::A:
            this->mLeft = state;
            break;

        default:
            break;
    }
}

void CharacterRender::updateSprite(sf::Time deltaTime) {
    //* do something with input
    double x, y;
    if (this->mUp) {
        y += -(MOV_VERTICAL_DEFAULT);
    }
    if (this->mDown) {
        y += MOV_VERTICAL_DEFAULT;
    }
    if (this->mLeft) {
        x += -(MOV_HORIZONTAL_DEFAULT);
    }
    if (this->mRight) {
        x += MOV_HORIZONTAL_DEFAULT;
    }

    this->movePos(x * deltaTime.asSeconds(), y * deltaTime.asSeconds());
    
    //* do something with 

}