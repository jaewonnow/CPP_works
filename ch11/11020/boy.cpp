#include "girl.h"
#include "boy.h"
#include <iostream>
Boy::Boy(){
    // Default 생성자
}

Boy::Boy(std::string name){
    name_ = name;
}

void Boy::setGirlFriend(Girl * g){
    girl_friend_ = g;
}

std::string Boy::getName(){
    return name_;
}

void Boy::sayHello(){
    std::cout << "나는 " << getName() << "입니다." ;
    std::cout << "내 여자친구는 " << girl_friend_->getName() << " 입니다." << std::endl;
}
