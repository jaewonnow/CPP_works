#include <iostream>
#include <list>
#include "point.h"
using namespace std;
int main(){
    list<Point> myList;
    int x, y;
    while(cin >> x >> y){
        myList.push_back(Point(x,y));
    }
    for(list<Point>::iterator i = myList.begin(); i!=myList.end(); i++){
        (*i).show();
    }
    for(list<Point>::reverse_iterator i = myList.rbegin(); i!=myList.rend(); i++){
        (*i).show();
    }
    return 0;
}
