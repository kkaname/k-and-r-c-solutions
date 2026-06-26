#include <stdio.h>

#define MAX_LEN 1000
#define LENGTH_LIMIT 80

int getLine(char line[], int max_len);

int main(void) {
  int line_len;
  char  line[MAX_LEN];

  while ((line_len = getLine(line, MAX_LEN)) > 0) {
    if (line_len > LENGTH_LIMIT) {
      printf("%s\n", line);
    }
  }

  return 0;
}

int getLine(char line[], int max_len) {
  int c, i, len;
  i = len = 0;

  while (i < max_len - 1 && (c = getchar()) != EOF && c != '\n') {
    line[i++] = c;
    ++len;
  }
  if (c == '\n') {
    line[i++] = '\n';
    ++len;
  }

  while (c != EOF && c != '\n') {
    len++;
    c = getchar();
  }
  line[i] = '\0';

  return len;
}
