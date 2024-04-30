#include <iostream>
#define MAXSTACK 1000
using namespace std;
class Stack{
    public:
        Stack(){
            sp = 0;
        }
        // insert one integer
        void push(int x){
            if (sp < MAXSTACK)
                stack[sp++] = x;
        }

        // is the stack empty?
        int isEmpty(){
            return sp==0; // sp가 0이면 true를 돌려주고 아니면 false를 돌려준다.
        }

        // return the top element
        int top(){
            return stack[sp-1];
        }

        // remove the top element, if any
        void pop(){
            if (!isEmpty()) sp--;
        }

    private:
        int stack[MAXSTACK];
        int sp;
};

// C++ 버전:
int main(){
    Stack mystack;
    int num = 0;
    // mystack.init();   // 생성자를 배운 경우 생성자에서 초기화한다.

    while ( cin >> num ){
        mystack.push(num);
    }
    while (!mystack.isEmpty()) {
        cout  << mystack.top()<< " --> ";
        mystack.pop();
    }
    cout << "END\n";

    return 0;
}
