#include <iostream>
using namespace std;

class Figure{ // 미완성
    protected:
        int width_, height_;
    public:
        Figure(int w, int h);
        virtual void whoareyou();
        virtual float area(); // 면적을 반환하는 함수.
};

Figure::Figure(int w, int h):width_(w), height_(h){
    // No other action.
}

void Figure::whoareyou(){
    cout << "나는 도형. ";
}
float Figure::area(){
    return 0.;
} // 면적을 반환하는 함수.

//
class Triangle: public Figure{
    public:
        Triangle(int w, int h):Figure(w,h){ }
        // area를 override하시요.
        float area() override;
        // whoareyou를 override하시요.
        void whoareyou() override;
};

float Triangle::area(){
    return width_ * height_ / (float)2;
}

void Triangle::whoareyou(){
    cout << "나는 삼각형. " ;
}
//
class Rectangle: public Figure{
    public:
        // 생성자를 만든다.
        Rectangle(int w, int h):Figure(w,h){ }
        // area를 override하시요.
        float area() override;
        // whoareyou를 override하시요.
        void whoareyou() override;
};

float Rectangle::area(){
    return (float)width_ * height_;
}

void Rectangle::whoareyou(){
    cout << "나는 사각형. " ;
}

int main(){
    Figure *fig[4];
    int tp, wd, ht, n;
    for (n=0; n<4; n++){
        cout << "타입과 폭, 높이를 입력하세요(1은 사각형, 0은 삼각형):";
        cin >> tp >> wd >> ht ;

        // 여기서 삼각형인지, 사각형인지에 따라서 new를 달리해 넣는다.
        if (tp == 1){
            fig[n] = new Rectangle(wd, ht);
        } else {
            fig[n] = new Triangle(wd, ht);
        }
    }

    for (n=0; n<4; n++){
        // 각 Figure의 실제 정체(whoareyou)와  면적(area)을 출력하시요.
        // 다형성을 이용하면 간단하게 할 수 있다.
        fig[n]->whoareyou();
        cout << "면적은 " << fig[n]->area() << endl;
    }
}
