#include "person.h"
Person::Person(string name, string id){
    name_ = name;
    id_ = id;
}

void Person::print(){
    cout << "저자: "<<name_ << " " << id_ << endl;
}
