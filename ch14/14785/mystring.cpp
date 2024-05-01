#include "mystring.h"
#include <iostream>
MyString::MyString(){
	// Default 생성자
}

void MyString::printLine(){
	std::cout << "내용은 " << *this << " 입니다." << std::endl;
}
