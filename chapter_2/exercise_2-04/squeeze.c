#include <stdio.h>

#define MAX_LEN 100
#define TRUE (1 == 1)
#define FALSE !TRUE

void squeeze(char s1[], char s2[]) {
  int i, j, k;
  int does_char_match;
  k = 0;

  for (i = 0; s1[i] != '\0'; i++) {
    does_char_match = FALSE;
    for (j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j]) {
        does_char_match = TRUE;
      }
    }
    if (!does_char_match) {
      s1[k++] = s1[i];
    }
  }
  s1[k] = '\0';
}

int main(void) {
  char s1[MAX_LEN], s2[MAX_LEN];

  printf("Enter fist string:");
  scanf(" %[^\n]%*c", s1);
  printf("Enter second string:");
  scanf(" %[^\n]%*c", s2);

  squeeze(s1, s2);

  printf("%s\n", s1);

  return 0;
}
