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
// 실제 implementation이 있는 함수인 print를 사용하기 위하여 PrintLogger가
// 멤버로 사용한다.
class Printer{
	public:
		void print(string msg){
			cout << msg << endl; 
		}
};

class PrintLogger:public Logger {  // 1. 단일 상속을 받는다.
	public:
		// 3.생성자에서 Member를 new해준다.(프린터 객체)
		PrintLogger(){
			printer_ = new Printer;
		}
		// 4. writeLog method를 구현한다.
		// writeLog method 는 단순히 받은 string을 출력하면 된다.
		void writeLog(string s){
			// print함수를 이용하여 s 를 출력한다. 
			printer_->print(s);
		}
		~PrintLogger(){
			delete printer_;
		}
	protected:
		// 2. Object Adapter이므로 멤벼 변수가 필요하다.
		Printer * printer_;
};


// App 은 Logger를 이용하는 클래스이다. 
class App{
	Logger *mylogger;
	public:
	App(Logger *pl){  mylogger = pl ; }
	void start(){
		mylogger->writeLog( "시스템 이상 무.");
	}
};

int main(){
	App *r1;

	r1 = new App(new PrintLogger);
	r1->start();
}
