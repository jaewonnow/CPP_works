#include "girlgroup.h"
#include "member.h"
#include <iostream>
GirlGroup::GirlGroup(){
    // Default 생성자
}

GirlGroup::GirlGroup(std::string name){
    name_ = name;
}

std::string GirlGroup::getName() const {
    return name_;
}

void GirlGroup::addMember(Member * m){
    member_[numMember_] = m;
    member_[numMember_]->setGroup(this);
    numMember_++;
}

void GirlGroup::tellme(){
    std::cout << name_ << std::endl;
    std::cout << "총원 " << numMember_ << "명" << std::endl;
    for(int i = 0; i < numMember_; i++){
        std::cout << member_[i]->getPart() << " " <<member_[i]->getName() << std::endl;
    }
}

void GirlGroup::setName(std::string name){
    name_ = name;
}
