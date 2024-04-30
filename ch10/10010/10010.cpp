#include <iostream>

using namespace std;

enum suit { spade, heart, diamond, club } ;

const string suitname[4] = {"♠","♡","◇","♣"};
const string rankname[13]={"A","2","3","4", "5","6","7","8","9","10", "J","Q","K"};

class Card{
    private:
        int suit_, rank_;
    public:
        Card(int s, int r){
            suit_= s; rank_ = r;
        }
        // accessor 추가
        int getRank() const {
            return rank_;
        }

        int getSuit() const {
            return suit_;
        }
};

int main(){
    // accessor를 이용하도록 수정해야한다.
    Card myCard1(spade, 0);
    Card myCard2(heart, 12);
    cout << suitname[myCard1.getSuit()]  << rankname[myCard1.getRank()] << endl;
    cout << suitname[myCard2.getSuit()]  << rankname[myCard2.getRank()] << endl;
}
