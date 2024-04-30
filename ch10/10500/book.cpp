#include "book.h"
Book::Book(string title, string author){
    mTitle = title;
    mAuthor = author;
}
void Book::print(){
    cout << "제목: " << mTitle << endl;
    cout << "저자: " << mAuthor << endl;
    cout << "가격: " << mPrice << endl;
}
void Book::setPrice(int p){
    mPrice = p;
}
