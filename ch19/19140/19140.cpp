#include <iostream>
using namespace std;
class Card{
    public:
        Card(int r, int s):rank(r), suit(s){
            // Empty
        }
        int getRank()const{
            return rank;
        }
        int getSuit()const{
            return suit;
        }
        void print() const{
            cout << "Rank: " << rank << " Suit: "<< suit;
        }
    private:
        int rank;
        int suit;
};

ostream& operator << (ostream& cout, Card c){
    printf("Rank: %d Suit: %d", c.getRank(), c.getSuit());
    return cout;
}

int main(){
    Card c(2,3);
    //myprint(cout, c);
    //cout << c;
    cout << "카드는 " << c << "입니다." <<endl;
    return 0;
}
