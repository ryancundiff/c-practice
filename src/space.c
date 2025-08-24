#include <stdio.h>

int main() {
  double earthWeight;
  unsigned int fightPlanet;

  printf("What is your earth weight?\nYour weight: ");
  scanf("%lf", &earthWeight);

  printf("\nEnter a number for the planet you want to fight on:\n");
  printf("1. Mercury\n2. Venus\n3. Mars\n4. Jupiter\n5. Saturn\n6. Uranus\n7. Neptune\n\nYour selection: ");
  scanf("%u", &fightPlanet);

  switch (fightPlanet) {
    case 1:
      printf("\nYour weight on Mercury would be %lf\n", earthWeight * 0.38);
      break;
    case 2:
      printf("\nYour weight on Venus would be %lf\n", earthWeight * 0.91);
      break;
    case 3:
      printf("\nYour weight on Mars would be %lf\n", earthWeight * 0.38);
      break;
    case 4:
      printf("\nYour weight on Jupiter would be %lf\n", earthWeight * 2.34);
      break;
    case 5:
      printf("\nYour weight on Saturn would be %lf\n", earthWeight * 1.06);
      break;
    case 6:
      printf("\nYour weight on Uranus would be %lf\n", earthWeight * 0.92);
      break;
    case 7:
      printf("\nYour weight on Neptune would be %lf\n", earthWeight * 1.19);
      break;
    default:
      printf("\nThere was an error.");
  }
}