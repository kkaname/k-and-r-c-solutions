# Exercise 1.13: Hello WOrld

Solution to Exercise 1.13 from *The C Programming Language* (K&R).

**Question:** Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. 

## Build & Run

### Compile:
```sh
gcc -o histogram histogram.c
```

### Run:
```sh
./histogram
```

## Expected Output:
### Input:
```
hello world i am writing c code
```
### Output:
```
Horizontal Histogram
---------------------
  1:	##
  2:	#
  3:	
  4:	#
  5:	##
  6:	
  7:	#
---------------------
Vertical Histogram
---------------------
  #           #
  #  #     #  #     #
  1  2  3  4  5  6  7
---------------------
```
