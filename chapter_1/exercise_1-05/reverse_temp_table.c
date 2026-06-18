#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit\tCelsius\n");
    printf("-----------------------\n");

    fahr = upper;
    while (fahr >= lower) {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%6.2f\t\t%6.2f\n", fahr, celsius);
        fahr = fahr - step;
    }
    printf("-----------------------\n");

    return 0;
}

