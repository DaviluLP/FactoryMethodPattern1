//
// Created by ludow on 09.11.2023.
//

#ifndef FACTORYMETHODPATTERN1_ITEM_H
#define FACTORYMETHODPATTERN1_ITEM_H

#include <iostream>

using namespace std;

class Item{
public:
    Item(string name, int id);

    //Eigenschaften
    string Name;
    int Id;

    virtual void useItem();
};

#endif //FACTORYMETHODPATTERN1_ITEM_H
