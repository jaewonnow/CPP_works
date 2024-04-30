// 이번에는 컨테이너의 데이터를 변경할 수 있도록 해보자.
// main에서 생성해서 공급하도록 해보자.
#include <iostream>
#include <list>
#include "frame.h"
using namespace std;
// ActionListener 를 추상 클래스로 만들고 상속을 받아서
// 필요한 리스너를 만든다.

int main(){
    Frame frm;
    frm.start();
    frm.show();
    return 0;
}
