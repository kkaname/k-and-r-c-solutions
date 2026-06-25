#include <stdio.h>

#define SEPARATOR "---------------------\n"

float fahr_to_celsius(int fahr) {
  return (5.0/9.0) * (fahr - 32);
}

int main(void) {
  int fahr;

  const int lower = 0;
  const int upper = 300;
  const int step = 20;

  printf("%10s %10s\n", "Fahrenheit", "Celsius");
  printf(SEPARATOR);

  for (fahr = lower; fahr <= upper; fahr += step) {
    printf("%10d %10.2f\n", fahr, fahr_to_celsius(fahr));
  }
  printf(SEPARATOR);

  return 0;
}
