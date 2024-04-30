#include <iostream>
using namespace std;
struct Bird{
    void fly(){
        cout << "I can fly!" << endl;
    }
    void sing(){
        cout << "La La La!" << endl;

    }
};
// Bird 구조체를 정의한다.
// 아래의 두 함수를 구조체 안으로 들여온다.
// 구조체의 멤버 변수는 필요 없다.

int main(){
    Bird tweety;

    // tweety의 fly 함수와 sing 함수를 순서대로 한번씩 호출해본다.
    tweety.fly();
    tweety.sing();

    return 0;
}
