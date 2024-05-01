#include "int.h"
#include <iostream>
Int::Int(){
    data_ = 0;
}

Int::Int(int n):data_(n){
    //Empty
}

void Int::addTo(Int n){
    data_ += n.data_;
}

void Int::show(){
    std::cout << data_ << std::endl;
}
