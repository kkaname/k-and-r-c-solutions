#include <stdio.h>

#define MAXLEN 1000

enum states{normal, character, string, multi_line_comment, single_line_comment};

int get_str(char str[]);
void removeComments(char str[], int len, char no_comment_str[]);

int main(void) {
  char str[MAXLEN], no_comment_str[MAXLEN];

  int len = get_str(str);
  removeComments(str , len, no_comment_str);

  printf("%s\n", no_comment_str);

  return 0;
}

int get_str(char str[]) {
  int c, i;

  for (i = 0; i < MAXLEN - 1 && (c = getchar()) != EOF; i++) {
    str[i] = c;
  }
  str[i] = '\0';

  return i;
}

void removeComments(char str[], int len, char no_comment_str[]) {
  int i, j;
  enum states state;
  state = normal;

  for (i = 0, j = 0; str[i] != '\0'; i++) {
    if (str[i] == '/' && i + 1 < len - 1 && str[i + 1] == '*' && state != string && state != character) {
      state = multi_line_comment;
      ++i;
    }
    else if (str[i] == '/' && i + 1 < len - 1 && str[i + 1] == '/' && state != string && state != character) {
      state = single_line_comment;
      ++i;
    }
    else if (str[i] == '*' && i + 2 < len - 1 && str[i + 1] == '/') {
      if (state == multi_line_comment) {
        i += 2;
        // increment 1 by two cause it skips str[i] = '*' and str[i + 1] = '/'
        // and i indexs to next element after "*/" and at the same time the state is
        // made to normal, due to which at the end of the loop, whatever comes after "*/"
        // goes to no_comment_str through -> no_comment_str[j++] = str[i]
        state = normal;
      }
    }
    else if (str[i] == '\n' && state == single_line_comment) {
      state = normal;
    }
    else if (str[i] == '\"' && state != multi_line_comment && state != single_line_comment) {
      if (state == string) {
        state = normal;
      }
      else {
        state = string;
      }
    }
    else if (str[i] == '\'' && state != multi_line_comment && state != single_line_comment) {
      if (state == normal) {
        state = character;
      }
      else if (state == character) {
        state = normal;
      }
    }
   else if (str[i] == '\\' && (str[i + 1] == '\'' || str[i + 1] == '\"')) {
      if (state == string || state == character) {
        no_comment_str[j++] = '\\';
        ++i;
        if (str[i] == '\'') {
          no_comment_str[j++] = '\'';
        }
        else {
          no_comment_str[j++] = '\"';
        }
        continue;
      }
    }

   if (state == multi_line_comment || state == single_line_comment) {
     continue;
   }
   else {
     no_comment_str[j++] = str[i];
   }
  }
  no_comment_str[j] = '\0';
}
