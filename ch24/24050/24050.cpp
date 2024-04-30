// 이번에는 리스너 생성을 Button 생성자에서 하지 말고
// main에서 생성해서 공급하도록 해보자.
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
        }
        void mouseClick(){
            // 리스너가 있는지 체크해보고 호출
            if(listener_ != nullptr) listener_ -> actionPerformed();
        }
        // 필요한 함수는 채워 넣으세요.
        void setActionListener(ActionListener * al){
            listener_ = al;
        }

    protected:
        ActionListener * listener_ = nullptr;
};

int main(){
    Button b;
    b.mouseClick();  // 아무 일도 일어나지 않는다.
    b.setActionListener(new ActionListener());
    b.mouseClick();
    return 0;
}
