#include <stdio.h>

int main(void) {
  int c;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case '\t':
        putchar('\\');
        putchar('t');
        break;
      case '\\':
        putchar('\\');
        putchar('\\');
        break;
      case '\b':
        /*
          * Modern terminals handle backspace locally before providing it to the program
          * As a result, the program rarely receives a literal \b character from standard input.
          */
        putchar('\\');
        putchar('b');
        break;
      default:
        putchar(c);
        break;
      }
  }
  // The reason I have prefered switch statement is that it cleaner and hase better readability.

  return 0;
}
