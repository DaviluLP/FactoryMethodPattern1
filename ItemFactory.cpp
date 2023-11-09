//
// Created by ludow on 09.11.2023.
//

#include "ItemFactory.h"

Item* ItemFactory::CollectItem(int id) {
    return nullptr;
}

Item* ItemFactory::DropItem() {
    Item* item;

    //srand(time(nullptr));
    for(int i = 0; i < 5; i++){
        rand();
    }
    auto itemId = rand() % 2;

    item = CollectItem(itemId);

    return item;
}
