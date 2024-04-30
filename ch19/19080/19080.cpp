#include <iostream>
#include <cstdio>
class MyStream{
    public:
        MyStream() {}
        void operator << (int n){
            printf("%d\n", n);
        }
        void operator << (const char * str){
            printf("%s\n", str);
        }
        void operator << (double n){
            printf("%.2lf\n", n);
        }
    private:
};
using namespace std;
int main(){
    MyStream mycout;
    mycout << 99 ;
    mycout << "Hello world";
    mycout << 3.14 ;

    return 0;
}
