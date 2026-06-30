#include <stdio.h>

#define MAXLEN 200

int getLine(char line[]);
void reverse(char s[], int len);

int main(void) {
  int len;
  char line[MAXLEN];

  while ((len = getLine(line)) > 0) {
    reverse(line, len);
    printf("%s\n", line);
  }

  return 0;
}

int getLine(char line[]) {
  int i, c;

  for (i = 0; i < MAXLEN - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
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

void reverse(char s[], int len) {
  int left, right;
  right = len - 1; // index of last character in string
  char temp;

  if (right > 0 && s[right] == '\n') {
    --right; // skip the newline character
  }

  for (left = 0; left < right; left++, right--) {
    temp = s[right];
    s[right] = s[left];
    s[left] = temp;
  }
}
