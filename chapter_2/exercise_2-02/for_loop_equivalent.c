#include <stdio.h>

#define LIM 100

int main(void) {
  int c, i = 0;
  char s[LIM];

  while (1) {
    if (i >= LIM - 1) {
      break;
    }

    c = getchar();

    if ((s[i++] = c) == '\n') {
      break;
    }
    else if (c == EOF) {
      break;
    }
    else  {
      s[i++] = c;
    }
  }

    printf("\n%s\n", s);

    return 0;
}
