//
// Created by ludow on 09.11.2023.
//

#ifndef FACTORYMETHODPATTERN1_ITEMFACTORY_H
#define FACTORYMETHODPATTERN1_ITEMFACTORY_H

#include <iostream>
#include <cmath>
#include "Item.h"
#include "Shield.h"
#include "Hammer.h"

class ItemFactory {

protected:
    virtual Item* CollectItem(int id);

public:
    Item* DropItem();

};


#endif //FACTORYMETHODPATTERN1_ITEMFACTORY_H
