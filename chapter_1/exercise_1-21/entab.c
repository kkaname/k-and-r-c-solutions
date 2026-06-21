#include <stdio.h>

/*
 * Question: When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?
 * Answer: When a tab would suffice, it should be given preference.
 */

#define TAB_WIDTH 8     //defines the width of the tab character

int main(void) {
  int c;
  unsigned int line_pos, no_spaces;
  line_pos = no_spaces = 0;

  while ((c = getchar()) != EOF) {
    ++line_pos;

    if (c == ' ') {
      ++no_spaces;

      if ((line_pos % TAB_WIDTH) == 0 && no_spaces > 1) {
        putchar('\t');
        no_spaces = 0;
      }
    }
    else {
      while (no_spaces) {
        putchar(' ');
        --no_spaces;
      }

      if (c == '\n') {
        line_pos = 0;
      }

      putchar(c);
    }
  }

  return 0;
}
