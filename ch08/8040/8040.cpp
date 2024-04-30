#include <iostream>
using namespace std;
class Rect{
    public:
        int width_;
        int height_;
        int area(){
            return width_ * height_;
        }
};
int main(){
    Rect r;
    r.width_ = 5; r.height_ = 6;
    cout << "면적" << r.area() << endl;
}
