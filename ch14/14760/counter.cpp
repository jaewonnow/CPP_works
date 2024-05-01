#include "counter.h"
#include <iostream>
Counter::Counter(){
    // Default 생성자
    n = 0;
    max = 100;
}

void Counter::show(){
    std::cout << n << " ";
}

void Counter::bump(){
    if(n < max){
        n++;
    }else{
        n = 0;
    }
}
