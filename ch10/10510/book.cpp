#include "book.h"
#include "person.h"
// 기타 필요한 include 등

Book::Book(string title, Person * author){
    mTitle = title;
    mAuthor = author;
}
void Book::print(){
    cout << "제목: " << mTitle << endl;
    mAuthor->print();
    cout << "가격: " << mPrice << endl;
}

void Book::setPrice(int p){
    mPrice = p;
}
