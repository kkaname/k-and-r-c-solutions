#include <stdio.h>

#define MAX_LEN 1000

int getLine(char line[], int max_len);
void remove_trailing_blanks(char line[], int len);

int main(void) {
  int len;
  char line[MAX_LEN];

  while ((len = getLine(line, MAX_LEN)) > 0) {
    remove_trailing_blanks(line, len);
    if (line[0] != '\0') {
      printf("%s\n", line);
    }
  }

  return 0;
}

int getLine(char line[], int max_len) {
  int c, i;

  for (i = 0; i < max_len - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i++] = c;
  }
  line[i] = '\0';

  while (c != EOF && c != '\n') {
    c = getchar();
  }

  return i;
}

void remove_trailing_blanks(char line[], int len) {
  int i = len - 1;
  int has_newline = 0;

  // to consider newline and trim spaces before it, if any
  if ( i >= 0 && line[i] == '\n') {
    has_newline = 1;
    --i;
  }
  while (i >= 0 && (line[i] == ' ' || line[i] == '\t')) {
    --i;
  }

  if (has_newline) {
    line[i + 1] = '\n';
    line[i + 2] = '\0';
  }
  else {
    line[i + 1] = '\0';
  }
}
