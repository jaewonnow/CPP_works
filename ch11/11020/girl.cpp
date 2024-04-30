#include "girl.h"
#include "boy.h"
#include <iostream>
Girl::Girl(){
    // Default 생성자
}

Girl::Girl(std::string name){
    name_ = name;
}

void Girl::setBoyFriend(Boy * b){
    boy_friend_ = b;
}

void Girl::changeName(std::string name){
    name_ = name;
}

std::string Girl::getName(){
    return name_;
}

void Girl::sayHello(){
    std::cout << "나는 " << getName() << "입니다." ;
    std::cout << "내 남자친구는 " << boy_friend_->getName() << " 입니다." << std::endl;
}
