#ifndef _PERSON_H_
#define _PERSON_H_
#include <iostream>
using namespace std;
class Person{
    private:
        string name_; //이름
        string id_; //주민번호
    public:
        Person(string name, string id);
        void print();
};
#endif
