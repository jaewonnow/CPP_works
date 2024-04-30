#pragma once
class Button;
class Frame{
    public:
        Frame();
        void addOne();
        void show();
        void start();
    protected:
        Button *button_;
        int data=0;
};