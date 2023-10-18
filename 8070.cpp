#include <iostream>
using namespace std;
class Account{
    public:
        Account(){
            balance_ = 0;
            //EMPTY
        }

        void setAccountNumber(string str){
            this->accountNum_ = str;
        }

        void setOwnerName(string str){
            this->name_ = str;
        }

        void setBalance(int money){
            this->balance_ = money;
        }

        void deposit(int money){
            this->balance_ += money;
        }

        void transferTo(Account *to, int money){
            setBalance(this->balance_ - money);
            to->balance_ += money;
        }

        void withdraw(int money){
            if(this->balance_ > money){
                setBalance(this->balance_ - money);
			}
		}
		
		void showStatus(){
            cout << "계좌번호 : " << accountNum_ << ", 예금주명 : " << name_ << ", 잔고 : " << balance_ << endl;
        }
    private:
        string accountNum_; //계좌번호
        string name_;
        int balance_;
};


int main(){
    Account *a, *b;
    a = new Account();
    b = new Account();
    a->setAccountNumber("212-30-222333");
    b->setAccountNumber("212-30-222444");
    a->setOwnerName("김길동");
    b->setOwnerName("홍길동");
    a->setBalance(0);    // 잔고를 0으로 설정
    b->setBalance(0);
    a->deposit(10000);   // 입금
    a->transferTo(b, 5000);   // b로 5000원 이체
    a->withdraw(1000);   // 인출
    a->showStatus();   // 계좌 정보를 전부 출력 - 계좌 번호  이름  잔고
    b->withdraw(6000);    // 잔고가 충분치 않으면 부분 출금하지 말고 반환
    b->showStatus();   // 계좌 정보를 전부 출력
    return 0;
}
