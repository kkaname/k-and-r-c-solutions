# Exercise 1.14: Histogram of Character Frequency

Solution to Exercise 1.14 from *The C Programming Language* (K&R).

**Question:** Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. 

## Build & Run

### Compile:
```sh
gcc -o freq_histogram freq_histogram.c
```

### Run:
```sh
./freq_histogram
```

## Expected Output:
### Input:
```
hello world!

```
### Output:
```
Character Frequency Histogram:
-------------------------
Newline: #
  Blank: #
      !: #
      d: #
      e: #
      h: #
      l: ###
      o: ##
      r: #
      w: #
```
