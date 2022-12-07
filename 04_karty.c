#include <stdio.h>

int main(void)
{
  char *cards = "JQKA";
  
  char c = cards[2];
  

  // toto nemozeme, cards ukazuje do pamate, ktora je "read-only"
  cards[2] = cards[1];
  cards[1] = cards[0];
  cards[0] = cards[2];
  cards[2] = cards[1];
  cards[1] = c;

  puts(cards);
 
  return 0;
}


