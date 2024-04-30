#pragma once
#include "apple.h"
#include <iostream>
#include <list>
using namespace std;
class Box {
    public:
        Box(string);
        void Add(Fruit *);
        void Show();
    protected:
        list<Fruit *> * stuff;
        string name_;
};
