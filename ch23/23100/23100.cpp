#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class TinyNumberPrinter{
    public:
        TinyNumberPrinter(double d):limit_(d){ }
        void operator() (double d){
            if(d < limit_) cout << d << endl;
        }
    private:
        double limit_;
};

int main(){
    // double 을 넣을 수 있는 벡터vec를 선언.
    vector<double> vec;
    double num;
    while ( cin >> num ){
        vec.push_back(num);
    }

    // for_each , TyniNumberPrinter 를 이용하여 1미만의 수를 전부 출력
    TinyNumberPrinter p(1.0);
    for_each(vec.begin(), vec.end(),p);
    cout << "**********" << endl;
    TinyNumberPrinter tp(2.0);
    for_each(vec.begin(), vec.end(),tp);
}
