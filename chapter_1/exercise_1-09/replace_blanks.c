#include <stdio.h>

int main(void) {
  int c, last_c;
  last_c = EOF;
  // last_c is initialized to EOF to make it clear that there is no previous character yet

  while ((c = getchar()) != EOF) {
    if (c != ' ' || last_c != ' ') {
      putchar(c);
    }
    last_c = c; // saves current character to detect consecutive spaces
  }
  // Note: only multiple spaces are collapsed into one, not tabs.

  return 0;
}
