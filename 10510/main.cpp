#include "book.h"
#include "person.h"
using namespace std;

int main(){
    Person *p = new Person("허균", "961212-1234567"); // 이름가 주민 번호
    Book * b = new Book("홍길동전", p);
    b->setPrice(15000);
    b->print();
    return 0;
}
