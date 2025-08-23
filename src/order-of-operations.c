#include <stdio.h>

int main() {
  
  unsigned int x;
  unsigned int y;

  // x = 2 + 3 * 5;
  // We want the addition to perform before the multiplication.
  // To do this, we will place 2 + 3 in a set of parenthesis.
  x = (2 + 3) * 5;

  // y = 2 / 4 + 6;
  // We want the addition to perform before the division.
  // To do this, we will place 4 + 6 in a set of parenthesis.
  y = 2 / (4 + 6);

  printf("x is: %u\n", x);
  printf("y is: %u\n", y);
}