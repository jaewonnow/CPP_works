#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <string>
class MyString :public std::string{
	// 공개 메소드
	public:	
		MyString();  // 기본 생성자.
		void printLine();
	// 멤버 변수 및 비공개 함수
	private:
};
#endif //_MYSTRING_H_
