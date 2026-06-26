#include <stdio.h>

#define MAX_LEN 1000   //max input line size

int getLine(char line[], int max_len);
void copy(char longest_line[], char current_line[]);

int main(void) {
  int current_len, max_len;
  char current_line[MAX_LEN], longest_line[MAX_LEN];

  max_len = 0;

  while ((current_len = getLine(current_line, MAX_LEN)) > 0) {
    if (current_len > max_len) {
      max_len = current_len;
      copy(longest_line, current_line);
    }
  }

  if (max_len > 0) {
    printf("Longest line (with %d characters): \n%s\n", max_len, longest_line);
  }

  return 0;
}

int getLine(char line[], int max_len) {
  int c, stored, length;
  stored = length = 0;

  while (stored < max_len - 1 && (c = getchar()) != EOF && c != '\n') {
    line[stored++] = c;
    length++;
  }

  while (c != EOF && c != '\n') {
    length++;
    c = getchar();
  }

  if (c == '\n') {
    if (stored < max_len - 1) {
      line[stored++] = '\n';
    }
    length++;
  }

  line[stored] = '\0';

  return length;
}

void copy(char longest_line[], char current_line[]) {
  int i;
  for(i = 0; (longest_line[i] = current_line[i]) != '\0'; i++)
    ; // null statement as the work is done by the condition and incrementatoin inside the loop itself
}
