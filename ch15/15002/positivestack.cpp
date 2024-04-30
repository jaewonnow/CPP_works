#include "positivestack.h"
PositiveStack::PositiveStack(){
    // Default 생성자
}

void PositiveStack::insert(int x){
    if(x > 0){
        node * temp;
        temp = new node(x, first);
        temp->next = first;
        first = temp;
    }
}
