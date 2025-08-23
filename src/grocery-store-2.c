#include <stdio.h>

int main() {
  // The amount of apples we have in stock.
  int appleQuantity;

  // The price of the apples.
  double applePrice = 1.49;

  // What customers rate the apples.
  double appleReview;
  int appleReviewDisplay;

  // The location of where we sell the apples.
  const char appleLocation = 'F';

  // The current day of the week.
  int dayOfWeek;

  appleQuantity = 23;

  // Add a new review (52) from another reviewer.
  appleReview = (823.0 + 52.0) / 10.0;
  appleReviewDisplay = (int)appleReview;

  dayOfWeek = 4;

  // Add a random amount of days.
  dayOfWeek += 6;

  // If there is less than 10 apples in stock, then run a 10% off sale.
  // Or if it is the 4th day of the week, that is the day we get the 
  // least sales, so run a 10% off sale then too.
  if (appleQuantity < 10 || dayOfWeek % 7 == 3) {
    applePrice *= 0.9;

    printf("Sale on apples today, today only they are: $%.2f\n", applePrice);
  }

  printf(
    "An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!",
    applePrice,
    appleQuantity,
    appleLocation,
    appleReviewDisplay
  );
}