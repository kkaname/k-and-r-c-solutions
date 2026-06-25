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
      putchar(c);
      state = IN;
    }
  }
  if (state == IN) {
    putchar('\n');
  } // handle the final word if input ends without trailing whitespace.

  return 0;
}
