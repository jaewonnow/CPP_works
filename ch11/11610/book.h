#ifndef _BOOK_H_
#define _BOOK_H_
#include <string>
class Person;
class Catalog;
class Book {
    // 공개 메소드
    public:
        Book();  // 기본 생성자.
        Book(Person * p, std::string isbn, std::string name, Book * first); //제목이 있는 경우
        Book(Person * p, std::string isbn, Book * first); //제목이 없는 경우
        void addBooktoList(Catalog * ct, Person * p, Book * b);
        Person * getAuthor() const;
        std::string getISBN() const;
        std::string getBookName() const;
        Book * getNext() const;
    // 멤버 변수 및 비공개 함수
    private:
        Person * author_; //작가
        std::string isbn_; //ISBN 번호
        std::string bookName_; //책이름
        Book * next_; //다음 책을 가르킴
};
#endif //_BOOK_H_
