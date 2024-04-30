#include <iostream>
using namespace std;

enum suit { spade, heart, diamond, club };

class Card{
private:
    short suit_ , rank_ ;
public:
    static const char * suitname[4] ;
    static const char * rankname[13] ;
    void SetSuitRank(short suit, short rank);
    void Show();
};
void Card::SetSuitRank(short suit, short rank){
    if (suit <0 || suit > club || rank < 0 || rank > 12) return;
    suit_ = suit;
    rank_ = rank;
}
void Card::Show(){
    cout << suitname[suit_]  << rankname[rank_] << endl;
}
// 클래스 상수의 초기화. 이부분은 main.cpp에 둔다.
const char * Card::suitname[4] = { "♠","♡","◇","♣"};
const char * Card::rankname[13]={ "A","2","3","4","5", "6","7","8","9","10", "J","Q","K"};

int main(){
    Card myCard;
    myCard.SetSuitRank(club, 11);
    myCard.Show();
    myCard.SetSuitRank(heart, 2);
    myCard.Show();
    myCard.SetSuitRank(club, 0);
    myCard.Show();
}
