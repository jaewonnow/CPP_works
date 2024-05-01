#include "cyclecounter.h"
#include <iostream>
CycleCounter::CycleCounter(){
    // Default 생성자
}

CycleCounter::CycleCounter(int i){
    n = 0;
    Counter::max = i;
    std::cout << "\n";
}
