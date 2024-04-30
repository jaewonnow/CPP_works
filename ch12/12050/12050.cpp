#include <iostream>
using namespace std;
class Rect{
    public:
        Rect(int w, int h){
            width_ = w; height_ = h;
        }
        void setWidth(int w){
            width_ = w;
        }
        int getWidth()const{
            return width_;
        }
        int getHeight()const{
            return height_;
        }
        void speak()const{
            cout << width_ << " X " << height_ << endl;
        }
    private:
        int width_;
        int height_;
};

// fun 함수는 수정하지 않는다.
void fun(const Rect & r){
    cout << r.getWidth() * r.getHeight() << endl;
    r.speak();
}
int main(){
    Rect r(3,4);
    fun(r);
    return 0;
}
