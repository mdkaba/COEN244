#ifndef CARD_H
#define CARD_H

#include <string>

const int SUIT_MAX(4);
const int RANK_MAX(13);

class Card
{
   
public:
    Card();
    Card(int, int);
    ~Card();
    void printCard();
    int setSuit();
    int setRank();
    int getSuit() const;
    int getRank() const;
    void changeSuit(int);
    void changeRank(int);

private:
    int m_suit;
    int m_rank;


};
#endif
