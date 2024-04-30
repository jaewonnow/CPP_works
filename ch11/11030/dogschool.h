#ifndef _DOGSCHOOL_H_
#define _DOGSCHOOL_H_
#include <string>
class Dog;
class DogSchool {
    // 공개 메소드
    public:
        DogSchool();  // 기본 생성자.
        DogSchool(std::string name);
        void registerDog(Dog *d);
        void drop(Dog * d);
        void showDogs();
        void setName(std::string name) ;
        std::string getSchoolName() const;
    // 멤버 변수 및 비공개 함수
    private:
        std::string schoolName_;
        Dog * student_[100];
        int numDogs = 0;
};
#endif //_DOGSCHOOL_H_
