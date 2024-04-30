#include "book.h"
int main(){
    Book * b = new Book("홍길동뎐", "허균");
    b->setPrice(15000);
    b->print();
    return 0;
}
