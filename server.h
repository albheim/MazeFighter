#ifndef SERVER_H
#define SERVER_H

#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <queue>

class Server
{
    public:
        Server();
        ~Server();
        void run();
        void stop();
        void listener();
    protected:
    private:
        bool running;
        queue<sf::Packet> incoming;
};

#endif // SERVER_H
