#include <stdio.h>

#define LOWERCASE_COUNT 26 //26 alphabets from a to z
#define UPPERCASE_COUNT 26 //26 alphabets from a to z
#define DIGIT_COUNT 10 //10 decimal digit
#define OTHERS_COUNT 1

void print_histogram(int freq[]);

int main(void) {
  int c, freq[LOWERCASE_COUNT + UPPERCASE_COUNT + DIGIT_COUNT + OTHERS_COUNT];
  int i;

  for (i = 0; i < (LOWERCASE_COUNT + UPPERCASE_COUNT + DIGIT_COUNT + OTHERS_COUNT); i++) {
    freq[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      ++freq[c - 97];
    }
    else if (c >= 'A' && c <= 'Z'){
      ++freq[LOWERCASE_COUNT + c - 65];
    }
    else if (c >= '0' && c <= '9') {
      ++freq[LOWERCASE_COUNT + UPPERCASE_COUNT + c - '0'];
    }
    else {
      ++freq[LOWERCASE_COUNT + UPPERCASE_COUNT + DIGIT_COUNT];
    }
  }

  // Now we print the histogram
  print_histogram(freq);

  return 0;
}

void print_histogram(int freq[]) {
  printf("Word Frequency Histogram:\n");
  printf("-------------------------\n");
  for (int i = 0; i < (LOWERCASE_COUNT + UPPERCASE_COUNT + DIGIT_COUNT + OTHERS_COUNT); i++) {
    if (freq[i] > 0) {
      if (i < LOWERCASE_COUNT) {
        printf("%c: ", 'a' + i);
      }
      else if (i < LOWERCASE_COUNT + UPPERCASE_COUNT) {
        printf("%c: ", 'A' + (i - LOWERCASE_COUNT));
      }
      else if (i < (LOWERCASE_COUNT + UPPERCASE_COUNT + DIGIT_COUNT)) {
        printf("%c: ", '0' + (i - LOWERCASE_COUNT - UPPERCASE_COUNT));
      }
      else {
        printf("others:");
      }

      for (int j = 0; j < freq[i]; j++) {
        printf("#");
      }
      putchar('\n');
    }
  }
}
