#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> myString;
    string buf;
    while(cin >> buf){
        myString.push_back(buf);
    }
    for(int i = myString.size()-1; i >= 0; i--){
        cout << myString.at(i) << endl;
    }
    return 0;
}
