#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
  int c, state;

  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == IN) {
        putchar('\n');
        state = OUT;
      }
    }
    else {
      state = IN;
      putchar(c);
    }
  }
  if (state == IN) {
    putchar('\n');
  } // if there is a word that doesn't end with ' ', '\t'
  /*
   * Note: In the last word, punctuation is treated as a part of the word.
   */

  return 0;
}
