#include "game.h"

Game::Game()
{
    std::cout << "gamector\n";
}

Game::~Game()
{
    //dtor
}

int Game::run(sf::RenderWindow &app)
{
    std::cout << "Hello, Game here!" << std::endl;

    return 0;
}
