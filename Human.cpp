//
// Created by ccpin on 12/8/2020.
//

#include <iostream>
#include "Human.h"
#include <random>
#include <utility>
#include <vector>
#include <algorithm>    // std::random_shuffle
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

Human::Human(int x1, int x2, int ID) : Entity(x1, x2, false, ID) {

}

void Human::move(){
    std::shuffle( openDirections.begin(), openDirections.end() , std::mt19937(std::random_device()()));

    std::string direction =  openDirections.at(0);

    if (direction == "North")
    {
        yPosition = yPosition + 1;

    }
    else if(direction == "South")
    {
        yPosition = yPosition - 1 ;

    }
    else if (direction == "East")
    {
        xPosition = xPosition + 1;

    }
    else if (direction == "West")
    {
        xPosition = xPosition - 1;

    }

}

void Human::setOpenDirections(std::vector<std::string> directions) {
        openDirections = std::move(directions);
}

std::string Human::recruitHuman() {
    std::string direction =  openDirections.at(0);
    if (getCounter() == 8){
        if (direction == "North")
        {
            resetCounter();
            return "North";
        }
        else if(direction == "South")
        {
            resetCounter();
            return "South";
        }
        else if (direction == "East")
        {
            resetCounter();
            return "East";
        }
        else if (direction == "West")
        {
            resetCounter();
            return "West";
        }
    }
    return "";
}
