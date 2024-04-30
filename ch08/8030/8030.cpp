#include <iostream>
using namespace std;
struct Rect{
    // 여기에 필요한 멤버 변수를 전부 선언하시요.
    unsigned int width_, height_;
    // 여기에 면적을 정수로 돌려주는 함수 area를 만드시오.
    unsigned int area(){
        return (this->width_ * this->height_);
    }
};

int main(){
    Rect r;
    r.width_ = 5; r.height_ = 6;
    cout << "면적" << r.area() << endl;
}
