#include <iostream>
#include "card.h"
using namespace std;
const char * CCard::suitname[4] = { "♠","♡","◇","♣"};
const char * CCard::rankname[13]={ "A","2","3","4","5", "6","7","8","9","10", "J","Q","K"};
CCard::CCard(){
    //empty
}
void CCard::SetSuitRank(short suit, short rank){
    if (suit < spade || suit > club || rank < 0 || rank > 12) return;
    suit_ = suit;
    rank_ = rank;
}
void CCard::Show(){
    cout << suitname[suit_] << rankname[rank_] << endl;
}
