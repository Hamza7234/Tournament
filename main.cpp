
#include <iostream>

#include "include/Team.hpp"
#include "include/Player.hpp"


using namespace  std;

int main(){

    Player player(
        "Hamza",
        "Isik",
        "skhamza843@gmail.com",
        "05314532672"
    );


    Team team("Galatasaray");

    team.addPlayer(player);

    cout<<team.toString();



    return 0;
}