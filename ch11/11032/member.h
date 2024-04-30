#ifndef _MEMBER_H_
#define _MEMBER_H_
#include <string>
class GirlGroup;
class Member {
    // 공개 메소드
    public:
        Member();  // 기본 생성자.
        Member(std::string part, std::string name);
        std::string getPart() const;
        std::string getName() const;
        void setGroup(GirlGroup * g);
        void tellme();
    // 멤버 변수 및 비공개 함수
    private:
        std::string part_; //특기
        std::string name_; //멤버 이름
        GirlGroup * group_; //소속 그룹
};
#endif //_MEMBER_H_
