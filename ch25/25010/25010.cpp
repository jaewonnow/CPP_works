#include "box.h"
#include "apple.h"
#include "banana.h"
#include <iostream>
using namespace std;
int main(){
    Box * box1 = new Box("큰 상자");

    box1->Add(new Apple("좋은 사과"));
    box1->Add(new Apple("불량 사과"));
    box1->Add(new Banana("파란 바나나"));
    box1->Add(new Banana("노란 바나나"));
    box1->Show();
}
