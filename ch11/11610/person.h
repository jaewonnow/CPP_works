#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>
class Book;
class Person {
    // 공개 메소드
    public:
        Book * first_ = nullptr; //처음 책의 포인터
        Book * ptr_ = nullptr; //리스트 재사용을 위한 포인터
        Person();  // 기본 생성자.
        Person(std::string name, std::string id);
        bool isEmpty();
        void summary();
        void changeName(std::string name);
        void addBook(Book * b);
        std::string getAuthorName() const;
        std::string getId() const;
    // 멤버 변수 및 비공개 함수
    private:
        std::string authorName_; //작가 이름
        std::string id_; //주민번호
        Book * book_[100]; //같은 저자가 쓴 책
        int numBook_ = 0; //작가가 쓴 책 권수
};
#endif //_PERSON_H_
