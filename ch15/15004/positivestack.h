#ifndef _POSITIVESTACK_H_
#define _POSITIVESTACK_H_
#include "stack.h"
class Stack;
class PositiveStack{
    // 공개 메소드
    public:
        PositiveStack();  // 기본 생성자.
        void insert(int x);
        int pop();
        void show();
    // 멤버 변수 및 비공개 함수
    private:
        Stack * stack_;
};
#endif //_POSITIVESTACK_H_
