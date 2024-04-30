#include "dog.h"
#include "dogschool.h"
#include <iostream>
Dog::Dog(){
    // Default 생성자
}

Dog::Dog(std::string name){
    name_ = name;
}

void Dog::dropSchool(){
    if(school_ == nullptr){
        //nullptr이면 자퇴불가
        std::cout << "학교에 다니고 있지 않습니다." << std::endl;
    }else{
        school_->drop(this);
        school_ = nullptr;
    }
}

void Dog::setName(std::string name){
    name_ = name;
}

void Dog::setSchool(DogSchool * s){
    school_ = s;
}

void Dog::show(){
    std::cout << "멍멍, 나는 " << name_ <<"입니다. ";
    std::cout << "나는 " << school_->getSchoolName() << "에 다닙니다." << std::endl;
}
