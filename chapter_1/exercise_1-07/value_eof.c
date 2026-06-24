#include <stdio.h>
// EOF is defined in stdio.h

int main(void) {
  printf("Value of EOF: %d.\n", EOF);
  // EOF is system/compiler dependent as its always negative integer, but usually is -1.

  return 0;
}
