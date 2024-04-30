#include <iostream>
using namespace std;
#include "boy.h"
#include "girl.h"
int main(){
    Boy *b = new Boy("김철수");
    Girl *g = new Girl("박영은");
    b->setGirlFriend(g);  g->setBoyFriend(b);
    b->sayHello();
    g->sayHello();
    g->changeName("박지선");
    b->sayHello();  // 자동으로 여친 이름이 바뀌어야 한다.
}
