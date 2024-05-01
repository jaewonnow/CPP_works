#include <iostream>
using namespace std;

class Double{
    public:
        Double():data_(0){}
        Double(double d):data_(d){}
        void show(){
            cout << "Value is " << data_ << endl;
        }
        void set(double d){
            data_ = d;
        }
        double get(){
            return data_;
        }
    private:
        double data_;
};
void print(Double d){
    cout << "전역 함수로: " << d.get() << endl;
}

int main(){
    Double myDouble;
    myDouble = 3.14;
    myDouble.show();
    print(6.25);
    print(13.35);
}
