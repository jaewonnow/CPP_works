#include <iostream>
using namespace std;

class Dog{
    public:
        Dog();
        void Bark();

};

Dog::Dog(){
    std::cout << "Dog의 생성자가 호출되었습니다. \n" ;
}

void Dog::Bark(){
    cout << "멍멍" << endl;
}

class NoisyDog : public Dog{
    public:
        NoisyDog();
        void Bark();
};

NoisyDog::NoisyDog(){
    //Empty
}

void NoisyDog::Bark(){
    cout << "멍멍!" << endl;
    cout << "멍멍!" << endl;
    cout << "멍멍!" << endl;
}

int main(){

    NoisyDog nd;
    nd.Bark();
}
