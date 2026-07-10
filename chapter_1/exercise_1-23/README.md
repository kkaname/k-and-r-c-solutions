# Exercise 1.23: Hello WOrld

Solution to Exercise 1.23 from *The C Programming Language* (K&R).

**Question:** Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments don't nest.

## Build & Run

### Compile:
```sh
gcc -o remove_comments remove_comments.c
```

### Run:
```sh
./remove_comments
```

## Expected Output:
### Input 1:
```
#include <stdio.h>

int main(void) {
    printf("/* not a comment */");
    printf("// not a comment");

    char slash = '/';
    char star = '*';

    int x = 10; // remove this comment

    /* remove
       this entire
       block */

    printf("Done\n");
    return 0;
}
```
### Output 2: 
```
#include <stdio.h>

int main(void) {
    printf("/* not a comment */");
    printf("// not a comment");

    char slash = '/';
    char star = '*';

    int x = 10;

    printf("Done\n");
    return 0;
}
```

### Input 2:
```
printf("\"Hello\"");
char quote = '\'';
char slash = '\\';
printf("This // is not a comment");
printf("This /* is not a comment */");
```
### Output 2:
```
printf("\"Hello\"");
char quote = '\'';
char slash = '\\';
printf("This // is not a comment");
printf("This /* is not a comment */");
```

### Input 3:
```
/**/int a = 1;/**/
int b = /* remove */ 2;
int c = 3; // remove
/*
whole
block
*/
int d = 4;
```
### Output 3:
```
int a = 1;
int b =  2;
int c = 3;

int d = 4;
```
