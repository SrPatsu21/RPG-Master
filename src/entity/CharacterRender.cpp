#include "CharacterRender.hpp"

CharacterRender::CharacterRender(std::string path) : AbstractRender(path) {
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

void CharacterRender::updateSprite(float deltaTime) {
    //* do something with input
    double x, y;
    if (this->mUp) {
        y += -(MOV_VERTICAL_DEFAULT);
    }
    if (this->mDown) {
        y += MOV_VERTICAL_DEFAULT;
    }
    if (this->mLeft) {
        y += -(MOV_HORIZONTAL_DEFAULT);
    }
    if (this->mRight) {
        y += MOV_HORIZONTAL_DEFAULT;
    }
    
    //* do something with 

}