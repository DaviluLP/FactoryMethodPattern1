//
// Created by ludow on 09.11.2023.
//

#include "ItemGenerator.h"

Item* ItemGenerator::CollectItem(int id) {
    Item* item;

    switch (id) {
        case 0:
            item = new Shield("Schutz der Goetter", 0, 150);
            break;
        case 1:
            item = new Hammer("Zorn der Goetter", 1, 200);
            break;
        default:
            cout << "Kein gültiges Item" << endl;
            break;
    }

    return item;
}
