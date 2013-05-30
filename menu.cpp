#include "menu.h"

Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}

int Menu::run(sf::RenderWindow &app)
{
    std::cout << "(s)tart server\n(c)onnect to server\n(q)uit\n";
    char c;
    std::cin >> c;

    switch(c)
    {
    case 's':
        return 2;
    case 'c':
        return 1;
    case 'q':
        return -1;
    }

    return -1;
}
