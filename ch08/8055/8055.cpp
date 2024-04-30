#include <iostream>
using namespace std;
struct Counter{
    int num;

    void tick(){
        this->num++;
    }

    void reset(){
        this->num = 0;
    }

    void display(){
        cout << this->num << " ";
    }
};

int main(){
    Counter cnt;
    int n; //입력용 변수
    while(cin >> n){
        if(n == 1){
            cnt.tick();
            cnt.display();
        }else if(n == 0){
            cnt.reset();
            cnt.display();
        }else{
            cout << "END" << endl;
            break;
        }
    }
    return 0;
}
