#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void square(double &d){
    d *= d;
}
void print(double d){
    cout << d << endl;
}
int main(int argc, char *argv[]){
    std::vector< double > v2 ;
    v2.push_back(1.1);
    v2.push_back(2.2);
    v2.push_back(3.3);

    //  for_each 를 이용하여 v2 내의 모든 수를 제곱한다.
    for_each(v2.begin(), v2.end(), square);
    //  for_each 를 이용하여 출력한다.
    for_each(v2.begin(), v2.end(), print);
    return 0;
}
