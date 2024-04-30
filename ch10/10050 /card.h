class CCard{
private:
    short suit_, rank_;
public:
    static const char * suitname[4] ;
    static const char * rankname[13] ;
    CCard();
    void SetSuitRank(short suit, short rank);
    void Show();
};
enum suit { spade, heart, diamond, club };
