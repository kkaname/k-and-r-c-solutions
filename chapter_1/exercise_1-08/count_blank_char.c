#include <stdio.h>

int main(void) {
  int num_blank, num_tab, num_newline, c;
  num_blank = num_tab = num_newline = 0;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case '\n':
        ++num_newline;
        break;
      case '\t':
        ++num_tab;
        break;
      case ' ':
        ++num_blank;
        break;
    }
  }
  // The reason I have prefered switch statement is that it may or may not be faster in some cases and for better readability.

  putchar('\n');
  printf("%-8s: %d\n", "Blanks", num_blank);
  printf("%-8s: %d\n", "Tabs", num_tab);
  printf("%-8s: %d\n", "Newlines", num_newline);

  return 0;
}
