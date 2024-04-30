#include "mystring.h"
#include <iostream>
int main(){
    MyString s;
    MyString *t = new MyString(" world");

    std::cout << "길이: " << s.length() << std::endl;
    s.add("Hello");  // 기존 스트링의 뒤에 덧붙이기.
    s.add(t);
    s.print();
    std::cout << "길이: " << s.length() << std::endl;

    delete t;

    // 메모리 관리를 잘 해야 점수를 다 받을 수 있음.

    return 0;
}
