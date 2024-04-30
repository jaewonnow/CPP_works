#include "button.h"
#include "listener.h"
Button::Button(){
}
void Button::mouseClick(){
    for (auto i: llist){
        i->actionPerformed();
    }
}
void Button::addActionListener(ActionListener *l){
    llist.push_back(l);
}
