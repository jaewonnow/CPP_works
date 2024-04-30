#include "positivestack.h"
PositiveStack::PositiveStack(){
    stack_ = new Stack;
}

void PositiveStack::insert(int x){
    if(x > 0){
        stack_->insert(x);
    }
}

int PositiveStack::pop(){
    stack_->pop();
}

void PositiveStack::show(){
    stack_->show();
}
