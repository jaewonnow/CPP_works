#include "person.h"
#include "book.h"
#include <iostream>
//링크드 리스트방식
Person::Person(){
    // Default 생성자
}

Person::Person(std::string name, std::string id){
    authorName_ = name;
    id_ = id;
}

void Person::changeName(std::string name){
    authorName_ = name;
}

void Person::addBook(Book * b){
    book_[numBook_] = b;
    numBook_++;
}

std::string Person::getAuthorName() const{
    return authorName_;
}

std::string Person::getId() const{
    return id_;
}

bool Person::isEmpty(){
    if( first_ == nullptr){
        return true;
    }
    return false;
}

void Person::summary(){
    std::cout << authorName_ << " " << id_ << std::endl;
    while( !isEmpty() ){
        std::cout << "도서명: " << first_->getBookName() << std::endl;
        std::cout << "저자: " << first_->getAuthor()->getAuthorName() << " " << first_->getAuthor()->getId() << std::endl;
        std::cout << "도서번호: " << first_->getISBN() << "\n" << std::endl;
        first_ = first_->getNext();
    }
    first_ = ptr_;
}
