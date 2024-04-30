#include <iostream>
using namespace std;
class Rect{
    private:
        int width_, height_;
    public:
        Rect(){}
        Rect(int w, int h):width_(w),height_(h){}
        // operator > 을 메소드로 정의한다.
        //  앞의 것이 면적이 크면 true를 돌려주고, 아니면 false를.
        bool operator > (Rect & b){
            return (this->area() > b.area());
        }
        int area(){ return width_ * height_ ; }
        void show (){ cout << "사각형 "<< width_ << "X" << height_ << endl;
        }
};

// maxi 함수를 template로 만든다.
template <class T>
T maxi(T x, T y){
    return (x>y)? x : y;
}


int main(){
    int i = maxi(33,44);
    cout << i << endl;

    Rect a(1,2), b(2,3);
    Rect c;
    c = maxi(a, b);
    c.show();
    c = maxi(b, a);
    c.show();
}
