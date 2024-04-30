#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

using namespace std;
class CMyString{
    private:
        char *buffer;
    public:
        CMyString(){
            buffer = (char *)malloc(INT_MAX);
            if (buffer == 0) throw(1);
        }
        void set(const char *s){ strcpy(buffer, s); }
        ~CMyString(){
            free(buffer);
        }
};

int main(){
    int i;
    try {
        for (i=0 ; i< 100000; i++){
            CMyString *str;
            str = new CMyString;
            str->set("Hello");
            if (i%1000 == 0) cout << i << endl;
            delete str;
        }
    } catch (int err){
        cout << "메모리 할당 불가" << endl;
        return 1;
    }
    cout << "정상종료\n";
    return 0;
}
