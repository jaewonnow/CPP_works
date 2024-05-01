#include <iostream>
#include "dog.h"
Dog::Dog(){
    std::cout << "Dog의 생성자가 호출되었습니다. \n" ;
}
void Dog::Bark(){
    std::cout << "멍멍!\n";
}
