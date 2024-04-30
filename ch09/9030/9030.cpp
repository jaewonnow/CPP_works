#include <iostream>
using namespace std;
class  Rect{
    public:
        int width_  ;    // 이것들을 생성자로  초기화.
        int height_ ;

        Rect(){
            width_ = 1;
            height_ = 1;
        }

        void Show(){
            cout << "높이: " << height_ <<  " 폭:" << width_ << "인 사각형S입니다." << endl;
        }
};

int main(){
    Rect *r;
    // 포인터 r 을 이용 동적 생성.
    r = new Rect;

    // r에 대해 Show  함수를  호출
    r->Show();
}
