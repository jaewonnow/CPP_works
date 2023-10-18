#include <iostream>
using namespace std;
class OrderedList{
    public:
        OrderedList(){
            next_ = 0;
        }

        //next가 비어있으면 1을 반환, 아니면 0을 반환
        int isEmpty(){
            if(this->next_ == 0){
                return 1;
            }
            return 0;
        }

        void add(int input){
            OrderedList * temp; //입력을 받을 포인터
            OrderedList * ptr = this; //위치를 가르키기 위한 포인터
            temp = new OrderedList;
            temp->data_ = input;
            temp->next_ = 0;

            if(isEmpty()){
                //비어있을 경우
                this->next_ = temp;
            }else{
                while(true){
                    if(this->next_->data_ > input ){
                        //맨 앞의 data가 input보다 큰 경우
                        temp->next_ = this->next_;
                        this->next_ = temp;
                        break;
                    }else{
                        //맨 앞의 data가 input보다 크지 않은 경우
                        if( (ptr->next_->next_ == 0) || (ptr->next_->next_->data_ >= input) ){
                            /*맨 앞 자료의 next_가 0인경우(= 자료가 1개인 경우) 또는
                             *맨 앞 data <= input <= 2번째의 data 인 경우
                             */
                            temp->next_ = ptr->next_->next_;
                            ptr->next_->next_ = temp;
                            break;
                        }else{
                            //input이 두번째 data보다 클 경우
                            ptr = ptr->next_;
                            continue;
                        }
                    }
                }
            }
        }

        void deleteMem(){
            //가장 앞에 있는 메모리를 해제
            OrderedList * delMem;
            delMem = this->next_;
            this->next_ = this->next_->next_;
            delete delMem;
        }

        void print(){
            while(this->next_ != 0){
                cout << this->next_->data_ << " ";
                deleteMem();
            }
            cout << endl;
        }

    private:
        int data_; //정수를 저장할 변수
        OrderedList * next_; //다음 순서를 나타내는 포인터
};

int main(){
    OrderedList myList;

    int n;
    while ( cin >> n ){
        myList.add(n);
    }

    myList.print();  // 순서대로 출력한다. 항목간에는 줄바꿈으로 구분.
    return 0;
}
