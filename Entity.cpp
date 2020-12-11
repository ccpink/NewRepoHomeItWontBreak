//
// Created by ccpin on 12/8/2020.
//

#include "Entity.h"


void Entity::resetCounter() {
    counter = 0;
}

int Entity::getCounter() {
    return counter;
}

Entity::Entity(int x, int y, bool isZombie, int ID) {
    this->xPosition = x;
    this->yPosition = y;
    this->isZombie = isZombie;
    this->id = ID;
}

bool Entity::getIsZombie() {
    return isZombie;
}

int Entity::getXPosition() {
    return xPosition;
}

int Entity::getYPosition() {
    return yPosition;
}

void Entity::setYPosition(int y) {
    yPosition = y;
}
void Entity::setXPosition(int x) {
    xPosition = x;
}
