#include "../include/Team.hpp"


Team::Team(std::string name){
    this->name = name;
}

Team::~Team(){

}

std::string Team::toString(){
    std::string text =  this->name + " -- Players :\n";
    std::list<Player>::iterator it;
    for (it = this->players.begin(); it != this->players.end(); ++it){
        text += it->toString()  + "\n";
    }
    return text;
}

void Team::addPlayer(Player player){
    this->players.push_back(player);
}

std::list<Player> Team::getPlayers(){
    return this->players;
}