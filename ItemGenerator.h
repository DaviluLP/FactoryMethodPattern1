//
// Created by ludow on 09.11.2023.
//

#ifndef FACTORYMETHODPATTERN1_ITEMGENERATOR_H
#define FACTORYMETHODPATTERN1_ITEMGENERATOR_H

#include <iostream>
#include "ItemFactory.h"

class ItemGenerator : public ItemFactory{

protected:
    Item* CollectItem(int id) override;

};


#endif //FACTORYMETHODPATTERN1_ITEMGENERATOR_H
