//
// Created by ludow on 09.11.2023.
//

#ifndef FACTORYMETHODPATTERN1_HAMMER_H
#define FACTORYMETHODPATTERN1_HAMMER_H

#include <iostream>
#include "Item.h"

class Hammer : public Item{

public:
    Hammer(string name, int id, int attackValue);

    int AttackValue;

    void useItem() override;
};


#endif //FACTORYMETHODPATTERN1_HAMMER_H
