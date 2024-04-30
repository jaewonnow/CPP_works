#include <unistd.h>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class MyString{
    public:
        char * data_;
        MyString(){
            data_ = strdup("");
        }

        MyString(const char *s){
            data_ = (char *)malloc(strlen(s)+1);
            strcpy(data_ , s);
        }

        MyString(const MyString & s){
            this->data_ = (char *)malloc(strlen( s.data_ )+1);
            strcpy(this->data_ , s.data_);
        }

        ~MyString(){
            printf("***소멸자에서 %p 번지를 free 시킵니다.\n", data_);
            free(data_);
        }

        void Show(){
            cout << "내이름은 " << data_ << endl;
        }

};

void Show(MyString s)
{
    cout << "전역 함수에서: " << s.data_ << endl;
}

int main(){
    MyString s1("1순이");

    // 1. 아래 줄을 그대로 두고 실행해본다. 2. 코멘트 해제하고 실행해본다.
    Show(s1);
    s1.Show();
}
