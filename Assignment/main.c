/*
Michael Giuliano
ECE 09342-3
9/20/17
*/

// Implementation of math.c function in a program

#include <stdio.h> // needed for print and basic I/O functionality
#include "math.h" // requires reference to math function for programm to find 

int main ()
{
  printf ("Hello Embedded\n");
  
  // Example syntax to use the function
  // Peforms all supported operations with numbers 10 and 5
  // Performs unsupported operation to show catchall
  math (10, 5, '+'); // returns 15
  math (10, 5, '-'); // returns 5
  math (10, 5, '*'); // returns 50
  math (10, 5, '/'); // returns 2
  math (10, 5, '%'); // returns 0
  math (10, 5, '$'); // returns invalid

  return 0;
}
