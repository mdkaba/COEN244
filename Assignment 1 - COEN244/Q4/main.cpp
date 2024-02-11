#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>

#include "card.h"

using namespace std;

int main()
{
	// Testing class Card
	int cardSuit, cardRank;

	Card card1; // statically creat a card
	cout<< "Please enter a number indicating the Suit \n (1: Spades ,2: Hearts, 3: Diamonds,4: Clubs)"<<endl;
	cin>>cardSuit;
	cout<< "Please enter a number indicating the Rank (1: Ace, 11: Jack ,12: Queen, 13: King,)"<<endl;
	cin>> cardRank;
	Card card2(cardSuit,cardRank);
	card1.printCard();
	card2.printCard();

//




    return 0;
}
