#include <iostream>
using namespace std;
//enum suit { spade, heart, diamond, club };

class Card{
    private:
        const string suitname[4] = {"♠","♡","◇","♣"};
        const string rankname[13]={"A","2","3","4", "5","6","7","8","9","10", "J","Q","K"};
        short suit_, rank_;
    public:
        void show(){
            cout << suitname[suit_]  << rankname[rank_] << endl;
        }
        // setSuitRank함수를 여기에...
        // 만일 suit나 rank 가 범위를 벗어나면 throw
        void setSuitRank(int suit, int rank){
            if(suit < 0 || suit > 3 || rank < 0 || rank > 12){
                throw(-1);
            }else{
                suit_ = suit;
                rank_ = rank;
            }
        }
};


int main(){
    Card myCard;
    short suit, rank;

    while ( cin >> suit >> rank ){
        try{
            myCard.setSuitRank(suit, rank);  // try-catch로 둘러싼다.
            myCard.show();
        }catch(int err){
            cout << "Error" << endl;
        }
    }
}
