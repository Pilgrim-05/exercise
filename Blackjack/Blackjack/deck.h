#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <array>

class Deck
{
private:
   std::array<Card, 52> m_deck;
   int m_cardIndex = 0;
   int getRandomNumber(int min, int max);
   void swapCard(Card &a, Card &b);
public:
   Deck();
   void shuffleDeck();
   void printDeck() const;
   const Card& dealCard();
};

#endif // DECK_H
