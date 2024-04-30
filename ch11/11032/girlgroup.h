#ifndef _GIRLGROUP_H_
#define _GIRLGROUP_H_
#include <string>
class Member;
class GirlGroup {
    // 공개 메소드
    public:
        GirlGroup();  // 기본 생성자.
        GirlGroup(std::string name);
        std::string getName() const;
        void addMember(Member * m);
        void tellme();
        void setName(std::string name);
    // 멤버 변수 및 비공개 함수
    private:
        std::string name_; //그룹명
        Member * member_[10]; //소속 멤버
        int numMember_ = 0; //소속 멤버 수
};
#endif //_GIRLGROUP_H_
