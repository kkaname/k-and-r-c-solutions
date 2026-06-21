#include <stdio.h>

#define MAX_LEN 1000

int squeeze(char s1[], char s2[]);

int main(void) {
  char s1[MAX_LEN], s2[MAX_LEN];

  printf("Enter fist string:");
  scanf(" %[^\n]%*c", s1);
  printf("Enter second string:");
  scanf(" %[^\n]%*c", s2);

  int location = squeeze(s1, s2);

  if (location == -1) {
    printf("No characters match.\n");
  }
  else {
    printf("Location: %d.\n", location);
  }

  return 0;
}

int squeeze(char s1[], char s2[]) {
  int i, j;

  for (i = 0; s2[i] != '\0'; i++) {
    for (j = 0; s1[j] != '\0'; j++) {
      if (s2[i] == s1[j]) {
        return j;
      }
    }
  }
  return -1;
}
