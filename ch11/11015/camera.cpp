#include <iostream>
#include "camera.h"
#include "lens.h"
Camera::Camera(){
    // Default 생성자
}

Camera::Camera(std::string name){
    modelName_ = name;
    lens_ = nullptr;
}


void Camera::tellSpec(){
    std::cout << "카메라 : " << modelName_ <<" 렌즈 : ";
    if(lens_ == nullptr){
        std::cout << "없음" << std::endl;
    }else{
        std::cout << lens_->getModelName() << std::endl;
    }
}

void Camera::attachLens(Lens* l){
    lens_ = l;
}

std::string Camera::getModelName() const {
    return modelName_;
}
