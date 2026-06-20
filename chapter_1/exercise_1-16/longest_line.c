#include <stdio.h>

#define MAX_LEN 1000   //max input line size

int getLine(char line[]);
void copy(char longest_line[], char current_line[]);

int main(void) {
    int current_len, max_len;
    char current_line[MAX_LEN], longest_line[MAX_LEN];

    max_len = 0;

    while ((current_len = getLine(current_line)) > 0) {
        if (current_len > max_len) {
            max_len = current_len;
            copy(longest_line, current_line);
        }
    }

    if (max_len > 0) {
        printf("The longest string with a length of %d is : %s\n", max_len, longest_line);
    }

    return 0;
}

int getLine(char line[]) {
    int i, c;

    for (i = 0; i < MAX_LEN - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i++] = c;
    }
    line[i] = '\0';

    while (c != EOF && c != '\n') {
        i++;
        c = getchar();
    }
    if (c == '\n') {
        i++;
    }

    return i;
}

void copy(char longest_line[], char current_line[]) {
    int i;
    for(i = 0; (longest_line[i] = current_line[i]) != '\0'; i++)
        ; // null statement as the work is done by the condition and incrementatoin inside the loop itself
}
