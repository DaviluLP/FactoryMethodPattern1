#include <iostream>
#include "Item.h"
#include "ItemGenerator.h"

int main() {

    srand(time(nullptr));
    ItemGenerator itemGenerator;

    for( int i = 0; i < 10 ; i++){
        Item* item = itemGenerator.DropItem();
        item->useItem();
    }

    return 0;
}
