#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  // first we display ranges of char
  printf("########## CHAR ##########\n");
  printf("bits: %d\n",CHAR_BIT);
  printf("Minimum value of char: %d\n", CHAR_MIN);
  printf("Maximum value of char: %d\n", CHAR_MAX);
  printf("Minimum value of signed char: %d\n", SCHAR_MIN);
  printf("Maximum value of signed char: %d\n", SCHAR_MAX);
  printf("Maximum value of unsigned char: %d\n\n", UCHAR_MAX);

  // to display short int
  printf("########## SHORT INT ##########\n");
  printf("Minimum value of short: %d\n", SHRT_MIN);
  printf("Maximum value of short: %d\n", SHRT_MAX);
  printf("Maximum value of unsigned short: %u\n\n", USHRT_MAX);

  // to display the ranges of int
  printf("########## INT ##########\n");
  printf("Minimum value of int: %d\n", INT_MIN);
  printf("Maximum value of int: %d\n", INT_MAX);
  printf("Maximum value of unsigned int: %u\n\n", UINT_MAX);

  // to display long int.
  printf("########## LONG INT ##########\n");
  printf("Minimum value of long: %ld\n", LONG_MIN);
  printf("Maximum value of long: %ld\n", LONG_MAX);
  printf("Maximum value of unsigned long: %lu\n\n", ULONG_MAX);

  // to display long long int
  printf("################ LONG LONG INT #################\n");
  printf("Minimum value of signed long long int: %lld\n", LLONG_MIN);
  printf("Minimum value of signed long long int: %lld\n\n", LLONG_MAX);
  printf("Minimum value of unsigned long long int max: %llu\n", ULLONG_MAX);

  // to display flaoting type numbers
  printf("################ FLOAT PRECISION NUMBERS #################\n");
  printf("Minimum value of float: %e\n", FLT_MIN);
  printf("Maximum value of float: %e\n", FLT_MAX);
  printf("Minimum value Double: %e\n", DBL_MIN);
  printf("Maximum value of Double: %e\n", DBL_MAX);
  printf("Minimum value of Long Double: %Le\n", LDBL_MIN);
  printf("Maximum Long Double: %Le\n\n", LDBL_MAX);

  return 0;
}
