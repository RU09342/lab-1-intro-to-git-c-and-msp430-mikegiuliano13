/*
Michael Giuliano
ECE 09342-3
9/20/17
*/

#include "math.h" // associated header
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