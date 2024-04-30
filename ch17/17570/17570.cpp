#include <iostream>
#include <string>
using namespace std;
class Animal{
    public:
        Animal(const char * name):name_(name){ }
        virtual void speak() = 0;
        void sayName(){
            cout << "내이름은 " << name_ << "입니다.\n";
        }
    protected:
        string name_;
};
class Cat:public Animal{
    public:
        Cat(const char *name):Animal(name){ }
        void speak() override{
            cout << "야옹! ";
            sayName();
        }
    private:
};
class Dog:public Animal{
    public:
        Dog(const char *name):Animal(name){ }
        void speak() override{
            cout << "멍멍! " ;
            sayName();
        }
    private:
};

class AnimalSchool{
    public:
        static const int MAXANI = 100;
        void addAnimal(Animal * a){
            animal[numAni++] = a;
        }
        void callAllAnimals(){
            for(int i = 0; i < numAni; i++){
                animal[i]->speak();
            }
        }
    private:
        Animal * animal[MAXANI];
        int numAni = 0;
};
int main(){
    AnimalSchool *s = new AnimalSchool();
    s->addAnimal(new Cat("Kitty"));
    s->addAnimal(new Cat("야옹이"));
    s->addAnimal(new Dog("바둑이"));
    s->addAnimal(new Dog("돌돌이"));
    s->callAllAnimals();
    return 0;
}
