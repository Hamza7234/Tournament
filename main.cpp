
#include <iostream>

#include "include/Player.hpp"


using namespace  std;

int main(){

    Player player(
        "Hamza",
        "Isik",
        "skhamza843@gmail.com",
        "05314532672"
    );

    cout<<player.toString();



    return 0;
}