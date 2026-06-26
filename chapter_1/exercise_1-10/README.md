# Exercise 1.10: Replace Escape Sequence

Solution to Exercise 1.10 from *The C Programming Language* (K&R).

**Question:**  Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way. 

## Build & Run

### Compile:
```sh
gcc -o replace replace.c
```

### Run:
```sh
./replace
```

## Expected Output:
### Input:
```
hello world    how are you
```
### Output:
```
hello world\thow are you
```
