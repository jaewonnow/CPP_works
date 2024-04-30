#include <iostream>
using namespace std;
// ActionListener 를 추상 클래스로 만들고 상속을 받아서
// AppleActionListener와 BananaActionListener로 만들라.
class ActionListener{
    public:
        ActionListener(){}
        virtual void actionPerformed()=0;
};
class AppleActionListener:public ActionListener{
    public:
        AppleActionListener(){ }
        void actionPerformed() override{
            cout << "Apple" << endl;
        }
};
class BananaActionListener:public ActionListener{
    public:
        BananaActionListener(){ }
        void actionPerformed() override{
            cout << "Banana" << endl;
        }
};
class Button{
    public:
        Button(){
        }
        void mouseClick(){
            // 채워야함.
            if(listener_ != nullptr) listener_->actionPerformed();
        }
        // setActionListener 함수 필요
        void setActionListener(ActionListener * l){
            listener_ = l;
        }
    protected:
        ActionListener * listener_ = nullptr;
};

// 2종류의 리스너를 상속으로 정의한다.
int main(){
    Button a, b;
    a.setActionListener(new AppleActionListener());
    b.setActionListener(new BananaActionListener());
    a.mouseClick();
    b.mouseClick();
    return 0;
}

