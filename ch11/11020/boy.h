#ifndef _BOY_H_
#define _BOY_H_
#include <string>
class Girl;
class Boy {
    // 공개 메소드
    public:
        Boy();  // 기본 생성자.
        Boy(std::string name);
        void setGirlFriend(Girl * g);
        std::string getName();
        void sayHello();
    // 멤버 변수 및 비공개 함수
    private:
        std::string name_;
        Girl * girl_friend_;
};
#endif
