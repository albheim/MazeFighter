#include "controller.h"

Controller::Controller()
{
    //ctor
}

Controller::~Controller()
{
    //dtor
}

void Controller::run()
{
    sf::Thread t(&Server::run, &server);
    screens.push_back(&ms);
    Game gs;

    Menu ms;
    screens.push_back(&gs);

    screen = 0;

    while (screen >= 0)
    {
        std::cout << "MAINLOOP, screen: " << screen << std::endl;
        screen = screens[screen]->run(app);
        /*
        0=Main menu
        1 = Game
        2 = Server & Game
        */
        std::cout << screen << std::endl;
        if (screen == 2)
        {
            screen-- ;
            t.launch();
        }
    }
    server.stop();
}
