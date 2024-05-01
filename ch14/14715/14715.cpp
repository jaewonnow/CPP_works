#include <iostream>
#include <string>

class Dog{
    protected:
        std::string name_;
    public:
        Dog(){
            //Empty
        }

        Dog(const char * s):name_(s){ }

        void speak(){
            std::cout << "내 이름은 " << name_ << std::endl;
        }

};

// FlyingDog 클래스를 여기에
class FlyingDog: public Dog{
    public:
        FlyingDog(){
            //Empty
        }

        FlyingDog(const char * s):Dog(s){ }

        void fly(){
            std::cout << name_ << " 난다." <<std::endl;
        }
    private:
};

// main 함수는 수정하지 않는다.
int main(){

    FlyingDog fd("나릉이");
    fd.speak();   // 내이름은 나릉이
    fd.fly();  // "나릉이 난다" 출력
    FlyingDog fd2("덤보");
    fd2.fly();   // "덤보 난다" 출력
    return 0;
}
