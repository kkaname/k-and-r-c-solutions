# Exercise 1.02: Invalid Escape sequence

Solution to Exercise 1.02 from *The C Programming Language* (K&R).

**Question:** Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above.

## Build & Run

### Compile:
```sh
gcc -o printf printf.c
```

### Run:
```sh
./printf
```

## Expected Output:
```
printf.c: In function ‘main’:
printf.c:4:26: warning: unknown escape sequence: ‘\c’
    4 |   printf("Hello world!\c");
      |                          ^
```
