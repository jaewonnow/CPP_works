#include <iostream>

class Rect {
    public:
        // 생성자
        Rect():width_(0), height_(0){ }
        Rect(int w, int h):width_(w), height_(h){ }
        // 연산자
        Rect operator ++ (){
            //height_ += 1;
            width_ += 1;
            return *this;
        }
        Rect operator ++ (int n){
            //width_ += 1;
            height_ += 1;
            return *this;
        }
        int operator * (){
            return width_ * height_;
        }
    private:
        int width_, height_;
};

using namespace std;
int main(){
    Rect r(2,8); // width 2, height 8
    r++;  // 높이를 증가
    cout << *r << endl;   // 면적을 출력
    ++r;  // 너비를 증가
    cout << *r << endl;
}
