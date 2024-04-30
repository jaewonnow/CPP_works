#include <iostream>
using namespace std;
class Animal{
    public:
        virtual void speak() = 0;
};

class Dog: public Animal{
    public:
        void speak() override{
            cout << "멍멍" << endl;
        }
    private:
};

class Cat:public Animal{
    public:
        void speak() override {
            cout << "야옹" << endl;
        }
    private:
};

int main(){
    Animal * animal[5];
    for(int i = 0; i < 5; i++){
        if((i%2) == 0){
            //0, 2, 4번째 배열은 dog
            animal[i] = new Dog;
        }else{
            //1, 3번째 배열은 cat
            animal[i] = new Cat;
        }
    }
}
