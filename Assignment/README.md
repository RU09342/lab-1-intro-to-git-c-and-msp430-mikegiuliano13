Lab Exercise 1: Introduction to C, Git, and the MS

The header file math.h specified to create a function that performs basic
math operations that takes the form math(int, int, char). This means it takes
in two operands and the operation symbol and returns the output value.

Header File math.h

First, two preprocessors ifndef and define are used.
"#ifndef MATH_H_" checks if named token has been defined in earlier or included file
"define MATH_H_" defines the token if it has not been

The remaining header file follows the format below:

/*
 * math.h
 *
 *  Created on: Aug 22, 2017
 * 	Last Edited: Sept 5, 2017
 *      Author: Russell Trafford
 */

/* Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
*/

#ifndef MATH_H_
#define MATH_H_

//Part of your documentation should be listing the valid inputs and outputs for the functions you create.
int math(int num1, int num2, char Operator);

#endif /* MATH_H_ */

Function math.c

This function references its associated header and can be used in a separate programm
by simply importing #include "math.h" and <stdio.h> for print functionality.

It takes in two integer operands num1 and num2 where the operation performed is based on
the character input parameter. The program supports addition, subtraction, multiplication, 
division, and mod division. Any invalid operation entered will output an error to
prevent a crash.

It is convenient because it not only returns the answer in integer format, 
but prints the answer to the console in a readable format.

#include "math.h" // requires reference to math function for programm to find
#include <stdio.h> // needed for print and basic I/O functionality

// math function that performs addition, subtraction, multiplication,
// division, and mod division

int math(int num1, int num2, char Operator){
    
    int answer = 0; // result of function
    
	// performs operation specified by character input
    switch(Operator) {
      case '+' :
        answer = num1 + num2;
        break;
      case '-' :
        answer = num1 - num2;
        break;
      case '*' :
        answer = num1 * num2;
        break;
      case '/' :
        answer = num1 / num2;
        break;
      case '%' :
        answer = num1 % num2;
        break;
      default  :
		// any other operator is not supported
        printf("%c is invalid operator\n", Operator);
    }
    
    printf("num1 %c num2 = %d\n", Operator, answer);
    return answer;
}

Using Math Function in Program

This file shows how the function would be used in a user program. It 
includes <stdio.h> and "math.h" to function properly.

It is shown using all of the supported operations as well as an unsupported one.

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
