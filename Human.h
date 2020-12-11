//
// Created by ccpin on 12/8/2020.
//

#ifndef ZOMBIESVSHUMANS_HUMAN_H
#define ZOMBIESVSHUMANS_HUMAN_H

#include "vector"
#include "Entity.h"

class Human: public Entity {
private:
    std::vector<std::string> openDirections;
public:
    Human(int x1, int x2, int ID);

    void setOpenDirections(std::vector<std::string> directions);

    void move();
};


#endif //ZOMBIESVSHUMANS_HUMAN_H
