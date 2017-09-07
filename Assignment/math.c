#include "math.h"

int math(int num1, int num2, char Operator){
    
    int answer = 0;
    
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
        printf("%c is invalid operator\n", Operator);
    }
    
    printf("num1 %c num2 = %d\n", Operator, answer);
    return answer;
}