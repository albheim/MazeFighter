#include "server.h"

Server::Server()
{
    std::cout << "servmain\n";
    running = true;
}

Server::~Server()
{
    //dtor
}

void Server::stop()
{
    std::cout << "servstop\n";
    running = false;
}

void Server::run()
{
    sf::Packet packet;
    sf::IpAddress sender;
    unsigned short port;
    while (running)
    {
        if (socket.receive(packet, sender, port) != sf::Socket::Done)
        {
            std::cout << "ERROR: Listen to socket failed!\n";
        }
        std::string s;
        packet >> s;
        std::cout << "Received " << s << " from " << sender << " on port " << port << std::endl;
    }
}
