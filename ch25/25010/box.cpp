#include "box.h"
#include <iostream>
using namespace std;
Box::Box(string name)
    :name_(name)
{
    //name_ = name;
    stuff = new list<Fruit *>;
}

void Box::Add(Fruit * r){
    stuff->push_back(r);
}

void Box::Show(){
    list<Fruit *>::iterator i;
    cout << "[상자. 이름은: " << name_ << ". 안에 들은 물건은: "  << endl;
    for (i=stuff->begin(); i != stuff->end();  i++){
        (*i)->Show();
    }
    cout << name_ << " 끝]" << endl;
}
