// Button Action Listener 로 가기 위한 첫 단계
// Callback 함수를 다루어 본다.
// Button 클래스를 수정하지 말고 AppleButton 으로 상속하여
// onClick 함수를 override하여 "Apple"을 추가로 출력하도록 하여보라.
// 또 다른 버튼은 BananaButton 클래스로 상속하여 "Banana"를 출력하도록 하>라.
#include <iostream>
using namespace std;
class Button{
    public:
        Button(){  }
        virtual void onClick(){
            cout << "Button 클릭됨.\n";
        };
};
class AppleButton:public Button{
    public:
        void onClick() override{
            cout << "Apple ";
            Button::onClick();
        }
    private:
};
class BananaButton:public Button{
    public:
        void onClick() override{
            cout << "Banana ";
            Button::onClick();
        }
    private:
};

int main(){
    Button * a = new AppleButton();
    a->onClick();
    Button *b = new BananaButton();
    b->onClick();
    return 0;
}
~
