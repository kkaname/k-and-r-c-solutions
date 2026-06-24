#include <stdio.h>

#define SEPARATOR "-----------------------"

int main(void) {
  float fahr;
  int celsius;
  const int lower = 0;
  const int upper = 200;
  const int step = 10;

  printf("%6s %15s\n", "Celsius", "Fahrenheit");
  printf(SEPARATOR "\n");

  for (celsius = lower; celsius <= upper; celsius += step) {
    fahr = (9.0/5.0) * celsius + 32;
    printf("%7d %15.2f\n", celsius, fahr);
  }

  printf(SEPARATOR "\n");

  return 0;
}
