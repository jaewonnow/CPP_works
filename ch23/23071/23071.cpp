#include <iostream>
using namespace std;
class Adder {
    public:
        void operator () (int &x){ x++; }
    private:
};
class Printer{
    public:
        void operator () (int x) { cout << x << endl; }

};
class Doubler{
    public:
        void operator () (int &x) { x *= 2; }
};
#include <iostream>
using namespace std;
int main(){
    Adder a;
    Printer p;
    Doubler d;

    int data = 99;
    a(data);

    cout << data << endl;

    d(data);   // data를 2배로 만든다.
    p(data); // Printer를 이용하여 출력한다.
}
