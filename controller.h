#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <vector>
#include "screens.hpp"
#include "server.h"

class Controller
{
    public:
        Controller();
        ~Controller();
        void run();
    protected:
    private:
        std::vector<ScreenTemplate*> screens;
        int screen;
        sf::RenderWindow app;
        Server server;
};

#endif // CONTROLLER_H
