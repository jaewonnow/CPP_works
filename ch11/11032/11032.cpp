// 필요한 헤더 파일 등은 선언해야한다.
#include "girlgroup.h"
#include "member.h"
int main(){
    GirlGroup *b = new GirlGroup ("AOA");
    Member *s1, *s2, *s3;
    s1 = new Member("보컬", "유나");
    s2 = new Member("연기", "혜정");
    s3 = new Member("댄스", "찬미");
    b->addMember(s1); b->addMember(s2); b->addMember(s3);
    b->tellme();   // 그룹 소개
    s1->tellme();  // 개인 소개
    s2->tellme();
    b->setName("AOA 크림");  // 그룹 이름이 바뀌면...
    s3->tellme();            // 자동으로 소개 내용도 바뀐다.
    return 0;
}
