#include "deck.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

int Deck::getRandomNumber(int min, int max)
{
   static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
   return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void Deck::shuffleDeck()
{
   m_cardIndex = 0;
   for (int index = 0; index < m_deck.size(); ++index)
   {
      int swapIndex = getRandomNumber(0, m_deck.size()-1);
      swapCard(m_deck[index], m_deck[swapIndex]);
   }
}

void Deck::printDeck() const
{
   for (const auto &card : m_deck)
   {
      card.printCard();
      std::cout << ' ';
   }

   std::cout << '\n';
}

const Card &Deck::dealCard()
{
   return m_deck[m_cardIndex++];
}

void Deck::swapCard(Card &a, Card &b)
{
   Card temp = a;
   a = b;
   b = temp;
}

Deck::Deck()
{
   srand(time(nullptr));
   rand();
   int card = 0;
   for (int suit = 0; suit < Card::MAX_SUITS; ++suit)
   {
      for (int rank = 0; rank < Card::MAX_RANKS; ++rank)
      {
         m_deck[card] = Card(static_cast<Card::CardRank>(rank), static_cast<Card::CardSuit>(suit));
         ++card;
      }
   }
}
