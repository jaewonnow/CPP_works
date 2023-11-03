#include "mystring.h"
#include <iostream>
#include <cstring>
MyString::MyString(){
	// Default 생성자
	word_ = nullptr;
}

MyString::MyString(const char * string){
	word_ = strdup(string); //malloc + strcpy
}

void MyString::add(MyString * data){
	strcat(word_, data->word_);
}

void MyString::add(const char* string){
	word_ = strdup(string);
}

void MyString::print(){
	std::cout << word_ << std::endl;
}

int MyString::length(){
	int temp;
	if(this->word_ != nullptr){
		temp = strlen(this->word_);
	}else{
		temp = 0;
	}
	return temp;
}

MyString::~MyString(){
	free(word_);
}
