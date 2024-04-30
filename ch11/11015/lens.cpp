#include "camera.h"
#include "lens.h"
#include <iostream>
Lens::Lens(){
    // Default 생성자
}

Lens::Lens(std::string name){
    modelName_ = name;
    camera_ = nullptr;
}

void Lens::attachCamera(Camera * cam){
    camera_ = cam;
}

void Lens::tellSpec(){
    std::cout << "렌즈 : " << modelName_ <<" 카메라 : ";
    if(camera_ == nullptr){
        std::cout << "없음" << std::endl;
    }else{
        std::cout << camera_->getModelName() << std::endl;
    }
}

std::string Lens::getModelName() const {
    return modelName_;
}
