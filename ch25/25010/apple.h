#pragma once
#include "fruit.h"
#include <iostream>
using namespace std;
class Apple :public Fruit{
    // 공개 메소드
    public:
        Apple(string);  // 기본 생성자.
        void Show() override;
    // 상속할 함수 및 변수
    protected:

};
