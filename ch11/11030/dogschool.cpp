#include "dog.h"
#include "dogschool.h"
#include <iostream>
DogSchool::DogSchool(){
    // Default 생성자
}

DogSchool::DogSchool(std::string name){
    schoolName_ = name;
}

void DogSchool::registerDog(Dog *d){
    student_[numDogs++] = d;
    d->setSchool(this);
}

void DogSchool::drop(Dog * d){
    //배열에서 해당 dog 찾기->삭제
    int i = 0;
    while(student_[i] != d){
        i++;
    }
    student_[i] = nullptr;
    delete student_[i];
    numDogs--;
}
void DogSchool::showDogs(){
    std::cout << "\n여기는 " << schoolName_ <<"입니다." << std::endl;
    std::cout << "학생들을 소개합니다." << std::endl;
    for(int i = 0; i < numDogs; i++){
        if(student_[i] == nullptr){
            student_[i] = student_[i+1];
            student_[i+1] = nullptr;
        }
        student_[i]->show();
    }
}

void DogSchool::setName(std::string name){
    schoolName_ = name;
}

std::string DogSchool::getSchoolName() const{
    return schoolName_;
}

