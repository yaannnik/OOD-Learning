#include <iostream>
#include "HelloWorld/HelloWorld.h"

using namespace std;

HelloWorld::HelloWorld() {
    cout << "Create HelloWorld instance" << endl;
}

HelloWorld::~HelloWorld() {
    cout << "Delete HelloWorld instance" << endl;
}

void HelloWorld::print() {
    cout << "HelloWorld" << endl;
}
