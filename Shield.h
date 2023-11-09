//
// Created by ludow on 09.11.2023.
//

#ifndef FACTORYMETHODPATTERN1_SHIELD_H
#define FACTORYMETHODPATTERN1_SHIELD_H


#include "Item.h"

class Shield : public Item{

public:
    Shield(string name, int id, int defenseValue);
    int defenseValue;

    void useItem() override;
};


#endif //FACTORYMETHODPATTERN1_SHIELD_H
