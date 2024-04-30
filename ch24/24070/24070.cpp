// 이번에는 리스너를 여러개를 더하도록 해보자.
// main에서 생성해서 공급하도록 해보자.
#include <iostream>
#include <list>
using namespace std;
// ActionListener 를 추상 클래스로 만들고 상속을 받아서
// AppleAcctionListener와 BananaActionListener로 만들라.
class ActionListener{
    public:
        virtual void actionPerformed()=0;
};

class Button{
    public:
        Button(){
        }
        void mouseClick(){
            // 여기를 채워야 한다.
            for(auto i = listners_.begin(); i!=listners_.end();i++){
                (*i)->actionPerformed();
            }
        }

        void addActionListener(ActionListener *l){
            // 여기도
            listners_.push_back(l);
        }
    protected:
    // std::list를 이용하여 리스너를 저장한다.
    list<ActionListener *> listners_;
};

class AppleActionListener: public ActionListener{
    void actionPerformed(){
        cout << "Apple" << endl;
    }
};
class BananaActionListener: public ActionListener{
    void actionPerformed(){
        cout << "Banana" << endl;
    }
};
int main(){
    Button a;
    cout << "One listener: " << endl;
    a.addActionListener(new AppleActionListener());
    a.mouseClick();
    cout << "Two listeners: " << endl;
    a.addActionListener(new BananaActionListener());
    a.mouseClick();
    return 0;
}
