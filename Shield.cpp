//
// Created by ludow on 09.11.2023.
//

#include "Shield.h"

Shield::Shield(string name, int id, int defenseValue) : Item(name, id) {
    this->defenseValue = defenseValue;
}

void Shield::useItem() {
    cout << "Der Schild mit dem Namen " << Name << " hat eine Verteidigung von " << defenseValue << " Punkten." << endl;
}
