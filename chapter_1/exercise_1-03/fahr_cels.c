#include <stdio.h>

#define SEPARATOR "-----------------------"

int main(void) {
  int fahr;
  float celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahrenheit\tCelsius\n");
  printf(SEPARATOR "\n");

  for (fahr = lower; fahr <= upper; fahr += step) {
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%6d\t\t%6.2f\n", fahr, celsius);
  }
  /* K and R's Version of code:
   * fahr = lower;
   * while (fahr <= upper) {
   *   celsius = (5.0/9.0) * (fahr - 32);
   *   printf("%6.2f\t\t%6.2f\n", fahr, celsius);
   *   fahr = fahr + step;
   * }
   */

  printf(SEPARATOR "\n");

  return 0;
}
