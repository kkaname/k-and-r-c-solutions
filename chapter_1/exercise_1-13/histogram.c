#include<stdio.h>

#define BUFFER 1000

void print_horizontal_histogram(int histogram[], int histogram_length);
void print_vertical_histogram(int histogram[], int histogram_length, int max_word_count);

int main(void) {
  int i, c, histogram[BUFFER];
  int word_length, histogram_length, max_word_count;

  word_length = histogram_length = max_word_count = 0;

  for (i = 0; i < BUFFER; i++) {
    histogram[i] = 0;
  }

  while ((c = getchar()) != EOF && word_length < BUFFER) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (word_length > 0) {
        ++histogram[word_length - 1];

        if (histogram_length < word_length) {
          histogram_length = word_length;
        }

        if (max_word_count < histogram[word_length - 1]) {
          max_word_count = histogram[word_length - 1];
        }

        word_length = 0;
      }
    }
    else {
      if (word_length < BUFFER) {
        ++word_length;
      }
    }
  }
  if (word_length > 0) {
    ++histogram[word_length - 1];

    if (histogram_length < word_length) {
      histogram_length = word_length;
    }

    if (max_word_count < histogram[word_length - 1]) {
      max_word_count = histogram[word_length - 1];
    }
  }
  putchar('\n');

  // now we call function to print horizontal and vertical histograms
  print_horizontal_histogram(histogram, histogram_length);
  print_vertical_histogram(histogram, histogram_length, max_word_count);

  return 0;
}

void print_horizontal_histogram(int histogram[], int histogram_length) {
  int line_index, column_index;

  printf("Horizontal Histogram\n---------------------\n");
  column_index = 0;

  while (column_index < histogram_length) {
    printf("%3d:\t", column_index + 1);
    for (line_index = 0; line_index < histogram[column_index]; line_index++) {
      printf("#");
    }
    printf("\n");
    ++column_index;
  }
  putchar('\n');
}

void print_vertical_histogram(int histogram[], int histogram_length, int max_word_count) {
  int line_index, column_index;

  printf("Vertical Histogram\n-------------------\n");
  for (line_index = max_word_count; line_index > 0; line_index--) {
    column_index = 0;
    while (column_index < histogram_length) {
      if (line_index == 0) {
        printf("%3d", column_index + 1);
      }

      else if (histogram[column_index] >= line_index) {
        printf("  #");
      }

      else {
        printf("   ");
      }

      column_index++;
    }
    printf("\n");

    if ((line_index - 1) == 0) {
      column_index = 0;
      while (column_index < histogram_length) {
         printf("%3d", column_index + 1);
         column_index++;
      }
      putchar('\n');
      for (int i = 0; i < histogram_length; i++) {
        printf("---");
      }
      putchar('\n');
    }
  }
}
