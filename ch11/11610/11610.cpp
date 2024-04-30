#include <iostream>
#include "catalog.h"
#include "person.h"
#include "book.h"
//링크드 리스트를 위해 일부 수정
using namespace std;
int main(){
    Catalog *ct = new Catalog("교보카탈로그");
    Person * p1 = new Person("김작가", "980101-1000111");  // 이름 및 주민번호
    Person * p2 = new Person("배작가", "980102-1000222");

    Book *a1, *a2, *a3;
    a1 = new Book(p2, "111-55-5555", ct->first_) ;    //  책 제목이 없으면 "제목 미정"으로 해준다.
    a1->addBooktoList(ct, p1, a1);
    a2 = new Book(p1, "111-22-4444", "까라마조프가의 자매들", ct->first_) ;
    a2->addBooktoList(ct, p1, a2);
    a3 = new Book(p1, "111-22-3333", "생의 주변에서", ct->first_) ;   // 파라메터는 저자*  ISBN, 제목, 리스
트의 시작 포인터
    a3->addBooktoList(ct, p2, a3);

    ct->addBook(a1);
    ct->addBook(a2);
    ct->addBook(a3);

    std::cout << "================================" << std::endl;
    ct->summary(); //카탈로그명, 총 권수  출력
    std::cout << "================================" << std::endl;
    p1->summary();
    std::cout << "================================" << std::endl;
    p1->changeName("허균");
    ct->summary();
    std::cout << "================================" << std::endl;
}
