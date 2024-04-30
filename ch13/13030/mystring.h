#ifndef _MYSTRING_H_
#define _MYSTRING_H_
class MyString {
    // 공개 메소드
    public:
        MyString();  // 기본 생성자.
        MyString(const char * string);
        void add(MyString * data);
        void add(const char* string);
        void print();
        int length();
        ~MyString();
    // 멤버 변수 및 비공개 함수
    private:
        char * word_;
};
#endif //_MYSTRING_H_
