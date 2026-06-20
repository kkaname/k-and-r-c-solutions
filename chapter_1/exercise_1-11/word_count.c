#include <stdio.h>

#define IN 1    // Inside a word
#define OUT 0   // Outside a word

int main(void) {
  int c, state;
  int word_count;

  word_count = 0;
  state = OUT;

  while ((c = getchar()) != EOF) {
      if (c == ' ' || c == '\t' || c == '\n') {
          state = OUT;
      }
      else if (state == OUT) {
          ++word_count;
          state = IN;
      }
  }

  printf("\nNumber of words: %d\n", word_count);

  return 0;
}

/*
 * ------------------------
 * Solution to the question:
 * ------------------------
 * Empty input i.e., EOF immediately where 0 word is expected so to find whether it print 0 or not.
 * Only whitespace i.e., spaces, tabs, newlines, nothing else, expecting 0 words to tests whether whitespace-only input incorrectly triggers a word count.
 * Single word with no newline at end — "hello" with EOF immediately after to tests whether the last word is counted without a trailing delimiter.
 * Multiple spaces between words — "foo    bar". Expected: 2. Tests whether consecutive whitespace inflates the count.
 * Tabs and newlines as delimiters — not just spaces so to tests whether all three separators work.
 * Single character words — a b c. Expected: 3.
 * Very long single word — no whitespace at all. Expected: 1.
 * Input starting with whitespace —    foo. Expected: 1, not 2. Tests the initial state handling.
 * Mixed newlines and words — multiline input. Tests \n as a proper delimiter.
 */
