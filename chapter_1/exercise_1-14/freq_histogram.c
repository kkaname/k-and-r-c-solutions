#include <stdio.h>

#define CHARSET_SIZE 256
#define SEPARATOR "-------------------------\n"

void print_histogram(int freq[]);

int main(void) {
  int freq[CHARSET_SIZE] = {0};
  int c;

  while ((c = getchar()) != EOF) {
    ++freq[c];
  }

  print_histogram(freq);

  return 0;
}

void print_histogram(int freq[]) {
  int i, j;

  printf("Character Frequency Histogram:\n" SEPARATOR);

  for (i = 0; i < CHARSET_SIZE; i++) {
    if (freq[i] > 0) {
      if (i != '\n' && i != ' ' && i != '\t') {
        printf("%7c: ", i);
      }
      else {
        if (i == ' ') {
          printf("%7s: ", "Blank");
        }
        else if (i == '\n') {
          printf("%7s: ", "Newline");
        }
        else {
          printf("%7s: ", "Tab");
        }
      }
      for (j = 0; j < freq[i]; j++) {
        putchar('#');
      }
      putchar('\n');
    }
  }
}
