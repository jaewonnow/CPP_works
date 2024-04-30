#include "frame.h"
#include "button.h"
#include "listener.h"
#include <iostream>
using namespace std;
class PlusActionListener: public ActionListener{
    public:
        PlusActionListener(Frame * f){
            container_ = f;
        }

        void actionPerformed(){
            container_->addOne();
        }

    protected:
        Frame *container_=0;
};

Frame::Frame(){
    button_ = new Button();
}

void Frame::addOne(){
    data++;
}
void Frame::show(){
    cout << "data = " << data << endl;
}
void Frame::start(){
    button_->addActionListener(new PlusActionListener(this));
    button_->mouseClick();
    button_->mouseClick();
    button_->mouseClick();
}
