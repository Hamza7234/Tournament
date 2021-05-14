#include "../include/Player.hpp"

Player::Player( std::string name,
                std::string surname,
                std::string mail,
                std::string phone){
    
    this->name = name;
    this->surname = surname;
    this->mail = mail;
    this->phone = phone; 
 }

Player::~Player(){
    
}

std::string Player::toString(){
    return "[" + this->name + " "+ this->surname + " "+ this->mail + " "+ this->phone +"]";
}

void Player::setName(std::string name){
    this->name = name;
}
void Player::setSurname(std::string surname){
    this->surname = surname;
}
void Player::setMail(std::string mail){
    this->mail = mail;
}
void Player::setPhone(std::string phone){
    this->phone = phone;
}
std::string Player::getName(){
    return this->name;
}
std::string Player::getSurname(){
    return this->surname;
}
std::string Player::getMail(){
    return this->mail;
}
std::string Player::getPhone(){
    return this->phone;
}