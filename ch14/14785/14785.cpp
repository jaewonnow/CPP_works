#include <iostream>
#include "mystring.h"
using namespace std;
int main(){
	MyString s;
	s.append("Hello");
	s.append("world");
	s.printLine();
	return 0;
}
