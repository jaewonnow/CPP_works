#pragma once
#include "fruitThing.h"
#include <iostream>
#include <list>
using namespace std;
class Box:public FruitThing {
    public:
        Box(string);
        void Add(FruitThing *);
        void Show();
    protected:
        list<FruitThing *> * stuff;
};
