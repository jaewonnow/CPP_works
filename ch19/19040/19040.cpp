// INT1.cpp 의 클래스를 복사
#include <iostream>
using namespace std;
class INT {
    public:
        // 생성자 2개  필요.
        INT():data_(0){}
        INT(int n):data_(n){}
        int getValue(){ return data_ ; }
    private:
        int data_;
};

// add 함수를 복사하여 연산자로 교체

INT operator +(INT a, INT b){
    INT temp(a.getValue()+b.getValue());  // 두수를 더한 값을 초기치로 준>다.
    // temp를 반환한다.
    return temp;
}

INT operator *(INT a, INT b){
    INT temp(a.getValue()*b.getValue());
    return temp;
}

int main(){
    INT x(1), y(2), z;
    z = x + y;
    z = z * z;
    cout << z.getValue() << endl;
}
