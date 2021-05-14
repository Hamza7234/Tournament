#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <list>

#include "Player.hpp"

class Team{

    private: 
        std::string name;
        std::list<Player> players;

    public:
    
        Team(std::string name);
        ~Team();

        std::string toString();

        void setName(std::string name);
        void addPlayer(Player player);
        std::list<Player> getPlayers();
        std::string getName();

};


#endif