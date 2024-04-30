#include <iostream>
using namespace std;
template <class T>
class Rect{
    private:
        T width_, height_;
    public:
        Rect(T w, T h):width_(w),height_(h){
            // nothing
        }
        T area(){
            return width_  * height_ ;
        }

};
int main(){
    // a는 정수 사각형으로 초기값 2, 3
    // b는 실수(double) 사각형으로 초기값 2.5, 3.5
    Rect<int> a(2,3);
    Rect<double> b(2.5, 3.5);
    cout << a.area() << endl;
    cout << b.area() << endl;
}
