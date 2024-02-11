#include <stdlib.h>     /* srand, rand */
#include "card.h"
#include <iostream>
using namespace std;

const std::string SUIT[SUIT_MAX]  = {"S", "H", "D", "C"};
const std::string RANK[RANK_MAX]  = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};


Card::Card()
{
   m_suit = setSuit();
   m_rank = setRank();
}

Card::Card(int suit, int rank)
{
    m_suit = suit;
    m_rank = rank;
}
Card::~Card()
{

}

// Set the card suit randomly.
int Card::setSuit()
{
    return rand() % (SUIT_MAX-1);
}

// Set card rank randomly.
int Card::setRank()
{
    return rand() % (RANK_MAX-1);
}
void Card::printCard()
{
    cout<<"The card is:"+ SUIT[getSuit()-1]+ " " + RANK[getRank()-1]<< endl;
}

int Card::getSuit() const
{
    return m_suit;
}

int Card::getRank() const
{
    return m_rank;
}

void Card::changeSuit(int new_suit)
{
    m_suit = new_suit;
}
7
void Card::changeRank(int new_rank)
{
    m_rank = new_rank;
}

