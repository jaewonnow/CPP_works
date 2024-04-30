#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// 여기에 Random 클래스를 작성한다.
class Random{
    public:
        Random(int min, int max){
            srandom(time(NULL));
            min_ = min;
            max_ = max;
        }

        int get(){
            int random_temp;
            random_temp = (random() % (max_ - min_ + 1)) + min_;
            return random_temp;
        }
    private:
        int min_;
        int max_;
};

int main(){
    Random ran(5,15); // 5~15사이(5, 15포함)의 난수를 발생하는 난수 발생기

    for (int i=0; i<20; i++){
        cout << ran.get() << " " ;
    }
    cout << endl;
    return 0;
}
