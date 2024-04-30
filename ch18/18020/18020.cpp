#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

// Logger클래스는 abstract class로서 인터페이스를 상속받기 위한 것이다.
class Logger{
	public:
		virtual void writeLog(string)=0;
};

// Printer 클래스는 이미 만들어져 있는 것.
// 실제 implementation이 있는 함수인 print를 사용하기 위하여 상속받는다.
class Printer{
	public:
		void print(string msg){
			// 진짜 프린터는 없으므로 이 출력이 프린터 출력이라고 생각하자.
			cout << "프린터에 출력합니다. " << msg << endl; 
		}
};

class PrintLogger: public Logger, public Printer {  // 1. 다중 상속을 받는다.
	public:
		// writeLog method를 구현한다.
		// writeLog method 는 단순히 받은 string을 출력하면 된다.
		void writeLog(string s){
			// 상속받은 함수를 이용하여 s 를 출력한다. 
			print(s);
		}
};


// App 은 Logger를 이용하는 응용 클래스이다. 
class App{
	private:
		Logger *mylogger;
	public:
		App(Logger *pl){  mylogger = pl ; }  // 초기화.
		void start(){
			for (int i=0; i<5; i++){
				mylogger->writeLog( "홍길동: 시스템 이상 무.");
			}
		}
};

int main(){
	App *r1;
	
	r1 = new App(new PrintLogger);
	r1->start();
}
