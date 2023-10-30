#include "catalog.h"
#include "person.h"
#include "book.h"
#include <iostream>
//링크드 리스트방식
Catalog::Catalog(){
    // Default 생성자
}

Catalog::Catalog(std::string name){
    name_ = name;
}

void Catalog::addBook(Book * b){
    book_[numCatBook_] = b;
    numCatBook_++;
}

bool Catalog::isEmpty(){
    if( first_ == nullptr){
        return true;
    }
    return false;
}

void Catalog::summary(){
//카탈로그명, 등록된 모든  도서 정보(도서명, ISBN, 저자명) 출력
    std::cout << "카탈로그 이름: " << name_ << std::endl;
    std::cout << "총 " << numCatBook_ <<"권의 책이 있습니다." << std::endl;
    while( !isEmpty() ){
        std::cout << "도서명: " << first_->getBookName() << std::endl;
        std::cout << "저자: " << first_->getAuthor()->getAuthorName() << " " << first_->getAuthor()->getId() << std::endl;
        std::cout << "도서번호: " << first_->getISBN() << "\n" << std::endl;
        first_ = first_->getNext();
    }
    first_ = ptr_;
}
