#include <iostream>
using namespace std;

class Rect{
public:
    int width_; // 가로
    int height_; // 세로
    void setSize(int w, int h){
        width_ = w; height_ = h;
    }
    void show(){
        cout << "가로 " << width_ << ", 세로 " << height_ << " 사각형.\n";
    }
};
int main(){

    // 포인터 배열 선언
    Rect *r[5];
    int w, h;
    // 5개의 객체를 생성, 크기 설정
    for(int i = 0; i < 5; i++){
        r[i] = new Rect;
        cin >> w >> h;
        r[i]->setSize(w, h);
    }
    // 마지막 객체부터 show 로 출력
    for(int i = 4; i >= 0; i--){
        r[i]->show();
    }
    return 0;
}
