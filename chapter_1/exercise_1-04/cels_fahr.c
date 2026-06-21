#include <stdio.h>

int main(void) {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 200;
  step = 10;

  printf("Celsius\t\tFahrenheit\n");
  printf("-----------------------\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0/5.0) * celsius + 32;
    printf("%6.2f\t\t%6.2f\n", celsius, fahr);
    celsius = celsius + step;
  }
  printf("-----------------------\n");

  return 0;
}
