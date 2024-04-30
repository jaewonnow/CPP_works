#include <iostream>
class INT {
    public:
        // 생성자 2개  필요.
        INT():data_(0){}
        INT(int n):data_(n){}
        int getValue(){ return data_ ; }
    private:
        int data_;
};

INT add(INT a, INT b){
    INT temp(a.getValue()+b.getValue());  // 두수를 더한 값을 초기치로 준>다.
    // temp를 반환한다.
    return temp;
}

int main(){
    INT x(1), y(2), z;
    z = add(x, y);
    std::cout << z.getValue() << std::endl;
}
