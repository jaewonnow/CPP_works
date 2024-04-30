#include <iostream>
using namespace std;
class Animal {
    public:
        Animal(){}
        virtual void sing(){ cout << "나는 동물. \n" ; }
    private:
};

class Dog: public Animal {
    public:
        Dog(){}
        void sing(){ cout << "나는 개. \n" ; }
    private:
};

class Cat: public Animal {
    public:
        Cat(){}
        void sing(){ cout << "나는 고양이. \n" ; }
    private:
};

int main(){
    Animal *a = new Animal;  // 포인터와 동적할당으로 바꿔야 다형성이 된다
.
    Dog *d = new Dog;
    Cat *c = new Cat;

    a->sing();
    a = d;
    a->sing();
    a = c;
    a->sing();
}


