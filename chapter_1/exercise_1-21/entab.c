#include <stdio.h>

/*
 * Question: When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?
 * Answer: When a tab would suffice, it should be given preference.
 */

#define TAB_WIDTH 8     //defines the width of the tab character

int main(void) {
  int c;
  int column, space_count;
  column = space_count = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++space_count;

      if (((column + space_count) % TAB_WIDTH) == 0) {
        putchar('\t');
        column += space_count;
        space_count = 0;
      }
    }
    else {
      if (space_count > 0) {
        while (space_count > 0) {
          putchar(' ');
          --space_count;
          ++column;
        }
      }
      putchar(c);
      ++column;
      if (c == '\n') {
        column = 0;
      }
    }
  }
  if (space_count > 0) {
    while (space_count > 0) {
      putchar(' ');
      --space_count;
      ++column;
    }
  }

  return 0;
}
