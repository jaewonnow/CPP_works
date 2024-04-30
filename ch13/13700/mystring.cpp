#include "mystring.h"
#include <cstring>
#include <iostream>
MyString::MyString(){
    // Default 생성자
}

MyString::MyString(const char * s){
    str_ = strdup(s);
}

MyString::MyString(const MyString & d){
    str_ = strdup(d.str_);
}

void MyString::Show(){
    std::cout << str_ << std::endl;
}

char * MyString::c_str(){
    return str_;
}

MyString::~MyString(){
    free(str_);
}
