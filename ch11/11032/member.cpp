#include "girlgroup.h"
#include "member.h"
#include <iostream>
Member::Member(){
    // Default 생성자
}

Member::Member(std::string p, std::string n){
    part_ = p;
    name_ = n;
}

std::string Member::getPart() const {
    return part_;
}

std::string Member::getName() const {
    return name_;
}

void Member::setGroup(GirlGroup * g){
    group_ = g;
}

void Member::tellme(){
    std::cout << part_ << " 담당 " << name_ << "! 소속 그룹은 " << group_->getName() << " 입니다." << std::endl;
}
