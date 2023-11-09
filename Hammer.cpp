//
// Created by ludow on 09.11.2023.
//

#include "Hammer.h"

Hammer::Hammer(string name, int id, int attackValue) : Item(name, id) {
    AttackValue = attackValue;
}

void Hammer::useItem() {
    cout << "Der Hammer mit dem Namen " + Name + " hat ein Angriffswert von " << AttackValue << " Punkten." << endl;
}
