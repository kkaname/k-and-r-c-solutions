#include <stdio.h>

#define TAB_WIDTH 8

int main(void) {
  int c, current_col;
  int num_spaces;

  current_col = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      num_spaces = TAB_WIDTH - (current_col % TAB_WIDTH);
      while (num_spaces > 0){
        putchar(' ');
        --num_spaces;
        ++current_col;
      }
    }
    else {
      putchar(c);
      ++current_col;
      if (c == '\n') {
        current_col = 0;
      }
    }
  }

    return 0;
}
