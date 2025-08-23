#include <stdio.h>

int main() {
  // The amount of apples we have in stock.
  short int appleQuantity = 23;

  // The price of the apples.
  double applePrice = 1.49;

  // What customers rate the apples.
  double appleReview = 82.5;
  short int appleReviewDisplay = (int)appleReview;

  // The location of where we sell the apples.
  const char appleLocation = 'F';

  printf(
    "An apple costs: $%.2f, there are %d in stock found in section: %c and your customers gave it an average review of %d%%!",
    applePrice,
    appleQuantity,
    appleLocation,
    appleReviewDisplay
  );
}