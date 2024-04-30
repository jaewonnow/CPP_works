#pragma once
#include <list>
class ActionListener;
class Button{
    public:
        Button();
        void mouseClick();
        void addActionListener(ActionListener *l);
    protected:
        std::list<ActionListener *> llist ;
};