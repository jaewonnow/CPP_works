#ifndef _DOG_H_
#define _DOG_H_
#include <string>
class DogSchool;
class Dog {
    // 공개 메소드
    public:
        Dog();  // 기본 생성자.
        Dog(std::string name);
        void dropSchool();
        void setName(std::string name);
        void setSchool(DogSchool * s);
        void show();
    // 멤버 변수 및 비공개 함수
    private:
        std::string name_;
        DogSchool * school_ = nullptr;
};
#endif //_DOG_H_
