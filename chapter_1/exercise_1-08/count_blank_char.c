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
  /*
   * The reason I have prefered switch statement is that
   * it is faster then if - else if ladder and better readability.
   *
   * You can also use if-else if ladder as follows:
   *
   * while ((c = getchar()) != EOF) {
   *   if (c == '\n') {
   *       ++num_newline;
   *   }
   *   else if (c == '\t') {
   *       ++num_tab;
   *   }
   *   else if (c == ' ') {
   *       ++num_blank;
   *   }
   * }
   */

  printf("blanks  :   %d\n", num_blank);
  printf("tabs    :   %d\n", num_tab);
  printf("newlines:   %d\n", num_newline);

  return 0;
}
