#include <stdio.h>

int main() {
  
  unsigned int endingDayOfWeek = 0;
  unsigned int daysThatPass = 22;
  const unsigned int daysInWeek = 7;

  endingDayOfWeek = daysThatPass % daysInWeek;

  printf(
    "You started on the 1st (0) day of the week, went %u days from this, so it is now the %u day of the week.\n",
    daysThatPass,
    endingDayOfWeek
  );
}