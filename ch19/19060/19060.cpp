#include <iostream>

class Rect {
    public:
        // 생성자 정의
        Rect():width_(0), height_(0){ }
        Rect(int w, int h):width_(w), height_(h){ }
        // 연산자 *, ~, !  정의
        int operator ! (){
            return height_;
        }

        int operator ~ (){
            return width_;
        }

        int operator * () {
            return height_ * width_;
        }
    private:
        int width_, height_;
};
using namespace std;
int main(){
    Rect r(2,3);  // width 2, height 3
    cout << "높이는 " << !r << endl;
    cout << "폭은 " << ~r << endl;
    cout << "면적은 " << *r << endl;
}
