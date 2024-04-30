#include <iostream>
using namespace std;
template <class T>
T maxi(T x, T y){
    if (x > y){
        return  x ;
    } else {
        return y;
    }
}

int main(){
    double a = 1.5, b = 2.5;
    int i=1, j=2;

    cout << "둘 중 큰 수는: " << maxi(a,b) <<endl;
    cout << "둘 중 큰 수는: " << maxi(i,j) <<endl;
}
