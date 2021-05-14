#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player{

    private:
        std::string name;
        std::string surname;
        std::string mail;
        std::string phone;

    public:

        Player(std::string name,
                std::string surname,
                std::string mail,
                std::string phone);
        
        ~Player();
        

        std::string toString();

        // Getter and Setter
        void setName(std::string name);
        void setSurname(std::string surname);
        void setMail(std::string mail);
        void setPhone(std::string phone);
        std::string getName();
        std::string getSurname();
        std::string getMail();
        std::string getPhone();
};

#endif