#include "card.h"
int main(){
    CCard myCard;
    myCard.SetSuitRank(club, 11);
    myCard.Show();
    myCard.SetSuitRank(heart, 2);
    myCard.Show();
    myCard.SetSuitRank(club, 0);
    myCard.Show();
}
