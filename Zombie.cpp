//
// Created by ccpin on 12/8/2020.
//

#include<string>
#include <iostream>
#include <vector>
#include "Zombie.h"
#include <random>
#include <algorithm>    // std::random_shuffle
#include <chrono>


Zombie::Zombie(int x, int y, int ID) : Entity(x, y, true, ID) {

}

bool Zombie::turnZombie() {
    return getCounter() == 8;
}

void Zombie::move(){
    std::default_random_engine rng(static_cast<unsigned> (std::chrono::system_clock::now().time_since_epoch().count()));

    // shuffle the deck
    std::shuffle(openDirections.begin(), openDirections.end(), rng);

    std::string direction =  openDirections.at(0);

    if (direction == "North")
    {
        yPosition = yPosition + 1;
        setYPosition(yPosition);

    }
    if(direction == "South")
    {
        yPosition = yPosition - 1 ;
        setYPosition(yPosition);

    }
    else if (direction == "East")
    {
        xPosition = xPosition + 1;

        setXPosition(xPosition);
    }
    else if (direction == "West")
    {
        xPosition = xPosition - 1;
        setXPosition(xPosition);
    }
    else if (direction == "North-West")
    {
        yPosition = yPosition + 1;
        xPosition = xPosition - 1;
        setYPosition(yPosition);
        setXPosition(xPosition);
    }
    else if (direction == "South-West")
    {
        yPosition = yPosition - 1;
        xPosition = xPosition - 1;
        setYPosition(yPosition);
        setXPosition(xPosition);
    }
    else if (direction == "North-East")
    {
        xPosition = xPosition + 1;
        xPosition = xPosition + 1;
        setYPosition(yPosition);
        setXPosition(xPosition);
    }
    else if (direction == "South-East")
    {
        yPosition = yPosition - 1;
        xPosition = xPosition + 1;
        setYPosition(yPosition);
        setXPosition(xPosition);
    }
}

void Zombie::setOpenDirections(std::vector<std::string> directions) {
    openDirections = directions;
}

