#include "catalog.h"
#include "person.h"
#include "book.h"
#include <string>
//링크드 리스트방식
Book::Book(){
    // Default 생성자
}

Book::Book(Person * p, std::string isbn, std::string name, Book * first){
//제목이 있는 경우
    author_ = p;
    isbn_ = isbn;
    bookName_ = name;
    author_->addBook(this);
    next_ = first;
}

Book::Book(Person * p, std::string isbn, Book * first){
//제목이 없는 경우
    author_ = p;
    isbn_ = isbn;
    bookName_ = "제목 미정";
    author_->addBook(this);
    next_ = first;
}

void Book::addBooktoList(Catalog * ct, Person * p, Book * b){
    ct->first_ = b;
    ct->ptr_ = ct->first_;
    p->first_ = b;
    p->ptr_ = p->first_;
}

Person * Book::getAuthor() const{
    return author_;
}

std::string Book::getISBN() const{
    return isbn_;
}

std::string Book::getBookName() const {
    return bookName_;
}

Book * Book::getNext() const{
    return next_;
}
