# Exercise 1.18: Remove Trailing Blanks and Tabs.

Solution to Exercise 1.18 from *The C Programming Language* (K&R).

**Question:** Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines. 

## Build & Run

### Compile:
```sh
gcc -o remove_trailing_blanks remove_trailing_blanks.c
```

### Run:
```sh
./remove_trailing_blanks
```

## Expected Output:
### Input:
```
Hello World!.....\n
```
#### Note: here '.' is blank character
### Output:
```
Hello World!\n
```
#### Note: here '\n' is just for representation and is not actually printed
