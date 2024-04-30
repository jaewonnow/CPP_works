#ifndef _GIRL_H_
#define _GIRL_H_
#include <string>
class Boy;
class Girl {
    // 공개 메소드
    public:
        Girl();  // 기본 생성자.
        Girl(std::string name);
        void setBoyFriend(Boy * b);
        void changeName(std::string name);
        std::string getName();
        void sayHello();
        // 멤버 변수 및 비공개 함수
    private:
        std::string name_;
        Boy * boy_friend_;

};
#endif