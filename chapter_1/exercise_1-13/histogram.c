#include<stdio.h>

#define MAX_WORD_LENGTH 1000
#define SEPARATOR "---------------------\n"

void print_horizontal_histogram(int histogram[], int histogram_length);
void print_vertical_histogram(int histogram[], int histogram_length, int max_word_count);

int main(void) {
  int i, c, histogram[MAX_WORD_LENGTH + 1];
  // MAX_WORD_LENGTH + 1 cause we will ignore 0 index and take literal index as per word length
  int word_length, histogram_length, max_word_count;

  word_length = histogram_length = max_word_count = 0;

  for (i = 0; i <= MAX_WORD_LENGTH; i++) {
    histogram[i] = 0;
  }

  while ((c = getchar()) != EOF && word_length < MAX_WORD_LENGTH) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (word_length > 0) {
        ++histogram[word_length];

        if (histogram_length < word_length) {
          histogram_length = word_length;
        }

        if (max_word_count < histogram[word_length]) {
          max_word_count = histogram[word_length];
        }

        word_length = 0;
      }
    }
    else {
      if (word_length < MAX_WORD_LENGTH) {
        ++word_length;
      }
    }
  }
  if (word_length > 0) {
    ++histogram[word_length];

    if (histogram_length < word_length) {
      histogram_length = word_length;
    }

    if (max_word_count < histogram[word_length]) {
      max_word_count = histogram[word_length];
    }
  }
  putchar('\n');

  print_horizontal_histogram(histogram, histogram_length);
  print_vertical_histogram(histogram, histogram_length, max_word_count);

  return 0;
}

void print_horizontal_histogram(int histogram[], int histogram_length) {
  int row, col;

  printf("Horizontal Histogram\n" SEPARATOR);
  col = 1;

  while (col <= histogram_length) {
    printf("%3d:\t", col);
    for (row = 0; row < histogram[col]; row++) {
      putchar('#');
    }
    putchar('\n');
    ++col;
  }
  printf(SEPARATOR);
}

void print_vertical_histogram(int histogram[], int histogram_length, int max_word_count) {
  int col, row;

  printf("Vertical Histogram\n" SEPARATOR);

  for (col = max_word_count; col > 0; col--) {
    row = 1;
    while (row <= histogram_length) {
      if (histogram[row] >= col) {
        printf("%3s", "#");
      }
      else {
        printf("%3s", " ");
      }
      row++;
    }
    putchar('\n');
  }

  row = 1;
  while (row <= histogram_length) {
    printf("%3d", row);
    ++row;
  }
  printf("\n" SEPARATOR);
}
