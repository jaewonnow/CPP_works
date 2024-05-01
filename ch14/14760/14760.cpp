#include <iostream>
#include "counter.h"
#include "cyclecounter.h"
using namespace std;
int main(){
    Counter c; // 0 로 초기화하되 계속 증가한다.
    for (int i=0; i<10; i++){
        c.show();
        c.bump();  // 1 증가시키는 함수
    }

    CycleCounter cc(3);  // 0으로 초기화하되 최대 카운터 값이3 이 되게 생
성자에서 설정한다.
        // 즉, 카운터 값이 0 1 2 3 0 1 2 3 ... 이렇게 된다.
    for (int i=0; i<10; i++){
        cc.show();
        cc.bump();
    }

    CycleCounter ccc(5); // 이 카운터는 최대 값이 5이다.
    for (int i=0; i<10; i++){
        ccc.show();
        ccc.bump();
    }

    return 0;
}
