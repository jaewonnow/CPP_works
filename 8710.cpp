#include <iostream>
using namespace std;

class Item{
    public:
        int data_;
        Item * next_;
        Item(){
            //empty
        }
        Item(int data, Item * next){
            data_ = data;
            next_ = next;
        }
};
class Stack{
    public:
        Item * first_;
        Stack(){
            first_ = nullptr;
        }
        void insert(int n){
            first_ = new Item(n, first_);
        }
        int top(){
            return first_->data_;
        }
        void pop(){
            Item * pfree;
            pfree = first_;
            first_ = first_->next_;
            delete pfree;
        }
        bool isEmpty(){
            // 이제는 0 1 대신 false true 로 쓴다.
            if(first_ == nullptr){
                return true;
            }
            return false;
        }
        void debugPrint(){
            // 디버깅 용으로 들어있는 정수들을 전부 출력한다.
            for(Item * ptr = first_; ptr != nullptr  ; ptr = ptr->next_){
                cout << ptr->data_ << endl;
            }
        }
};
int main(){
    Stack s;  int num;

    while ( cin >> num ){
        s.insert(num);
    }

    //s.debugPrint(); // 테스트 출력
    // 이제 하나씩 빼자.
    while ( ! s.isEmpty() ){
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
