#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void fahr_to_celsius(float fahr) {
  float celsius;
  celsius = (5.0/9.0) * (fahr - 32);
  printf("%3.0f\t\t%.2f\n", fahr, celsius);
  return;
}

int main(void) {
  float fahr;

  printf("Fahrenheit\tCelsius\n-------------------------\n");
  fahr = LOWER;
  while (fahr <= UPPER) {
      fahr_to_celsius(fahr);
      fahr += STEP;
  }

  return 0;
}
