#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class MyString{
    public:
        MyString():str_(nullptr){ }

        MyString(const char * s){
            str_ = strdup(s);
        }

        MyString(const MyString& s){
            str_ = strdup(s.str_);
        }

        char * getStr() const{
            return str_;
        }

        void operator = (const char * s){
            free(str_);
            str_ = strdup(s);
        }

        void operator = (const MyString& s){
            free(str_);
            str_ = strdup(s.str_);
        }

        void operator += (const MyString& s){
            str_ = strcat(str_, s.str_);
        }
        
        ~MyString(){
            printf("free %p \n", str_);  // 주소 값을 출력
            free(str_);
        }
    private:
        char * str_;
};

ostream& operator << (ostream& cout, const MyString& s){
    cout << s.getStr();
    return cout;
}

int main(){
    MyString s1, s2("world");
    MyString s3;

    s1 = "Hello ";
    s3 = s1;
    s3 += s2;
    std::cout << s1 << " " << s2 << " " << s3 << std::endl;
}

