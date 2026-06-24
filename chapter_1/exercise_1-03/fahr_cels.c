#include <stdio.h>

#define SEPARATOR "---------------------"

int main(void) {
  int fahr;
  float celsius;

  const int lower = 0;
  const int upper = 300;
  const int step = 20;

  printf("%10s %10s\n", "Fahrenheit", "Celsius");
  printf(SEPARATOR "\n");

  for (fahr = lower; fahr <= upper; fahr += step) {
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%10d %10.2f\n", fahr, celsius);
  }

  printf(SEPARATOR "\n");

  return 0;
}
