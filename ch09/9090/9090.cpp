#include <iostream>
using namespace std;
class Rect{
    public:
        Rect(int w, int h){
            width_ = w;
            height_ = h;
        }
        static Rect * getRect(){
            int w, h;
            if(cin >> w && cin >> h){
                return new Rect(w, h);
            }else{
                return 0;
            }
        }
        void show(){
            cout << width_ << "x" << height_ << " 사각형입니다." << endl;
        }
    private:
        int width_;
        int height_;
};
int main(){
    Rect *r;
    r = Rect::getRect();
    r->show();  // 출력 예시: 3x4 사각형입니다.
    return 0;
}
