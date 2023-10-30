#ifndef _CATALOG_H_
#define _CATALOG_H_
#include <string>
class Book;
class Catalog {
    // 공개 메소드
    public:
        Book * first_ = nullptr; //처음 책의 포인터
        Book * ptr_ = nullptr; //리스트 재사용을 위한 포인터
        Catalog();  // 기본 생성자.
        Catalog(std::string name);
        void addBook(Book * b);
        bool isEmpty();
        void summary(); //카탈로그명, 등록된 모든  도서 정보(도서명, ISBN, 저자명) 출력
        // 멤버 변수 및 비공개 함수
    private:
        std::string name_; //카탈로그 이름
        Book * book_[100]; //카테고리에 포함된 책
        int numCatBook_ = 0; //카테고리 내의 책 권수
};
#endif //_CATALOG_H_
