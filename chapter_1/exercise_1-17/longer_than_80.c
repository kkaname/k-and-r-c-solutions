#include <stdio.h>

#define MAXLEN 1000
#define LENGTH_LIMIT 80

int getLine(char line[]);

int main(void) {
  int c, line_len;
  char  line[MAXLEN];

  while ((line_len = getLine(line)) > 0) {
    if (line_len > LENGTH_LIMIT) {
      printf("%s\n", line);
    }
  }

  return 0;
}

int getLine(char line[]) {
  int c, i, len;

  i = len = 0;

  while ((c = getchar()) != EOF && c != '\n') {
    line[i++] = c;
    ++len;
  }
  if (c == '\n') {
    line[i++] = '\n';
    ++len;
  }
  c = '\0';

  return len;
}
