Collatz Sequence Generator

This simple C program generates and displays the Collatz sequence starting from a given positive integer.

How it Works:

The Collatz sequence, also known as the "3n + 1" problem, starts with any positive integer. If the current number is even, it is divided by 2; if it is odd, it is multiplied by 3 and then incremented by 1. This process is repeated until the number reaches 1.
Functions
int getStart(): Prompts the user to enter a positive starting number for the Collatz sequence.

int nextCollatz(int x): Returns the next number in the Collatz sequence based on whether the current number is even or odd.

Notes

- The program ensures that the entered number is positive.
- It calculates the Collatz sequence until the number reaches 1.
- The length of the generated sequence is displayed.
