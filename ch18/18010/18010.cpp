#include <iostream>
using namespace std;
class Dog{
    public:
    void Bark(){ cout << "멍멍" << endl; }
};
class Bird{
    public:
    void Fly(){ cout << "쓩~!" << endl; }
};
//
// 다중상속으로 FlyingDog을 여기에 선언.
class FlyingDog:public Dog, public Bird{
    public:
    protected:
    private:
};
int main(){
    FlyingDog fd;
    fd.Bark();
    fd.Fly();
}
