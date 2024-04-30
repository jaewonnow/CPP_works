// 헤더 파일 등을 선언한다.
#include "squad.h"
#include "soldier.h"
// 아래는 수정하지 않는다.
int main(){
    Squad *b = new Squad ("번개 분대");
    Soldier *s1, *s2, *s3;
    s1 = new Soldier("일병", "홍길동");
    s2 = new Soldier("이병", "김길동");
    s3 = new Soldier("병장", "박길동");
    b->addSoldier(s1); b->addSoldier(s2); b->addSoldier(s3);
    b->stat();
    s1->speak();
    s2->speak();
    b->setName("천둥 분대");
    s1->speak();
    // 이번에는 병사 이름을 바꿔서 반영되는지 본다.
    s3->setName("박길수");
    b->stat();
    return 0;
}
