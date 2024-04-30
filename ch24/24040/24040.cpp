// a.mouseClick() 함수를 호출하면 자동으로 리스너의 actionPerformed가
// 호출되도록 한 줄을 넣어보라.
#include <iostream>
using namespace std;
class ActionListener{
    public:
        void actionPerformed(){
            cout << "Apple" << endl;
        }
};

class Button{
    public:
        Button(){
            listener_ = new ActionListener();
        }
        void mouseClick(){
            // 현재는 No action
            listener_->actionPerformed();
        }
    protected:
        ActionListener * listener_;
};

int main(){
    Button a;
    a.mouseClick();
    return 0;
}
