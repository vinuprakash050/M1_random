#include <stdio.h>
#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

typedef enum function_status_t
{
  SUCCESS,
  OVERFLOW,
  UNDERFLOW
}function_status_t;

function_status_t calculatorv1(int param1,int param2,char sign,int* result);

int calculator() {
    int num1,num2;
    char operatorSign;
    int result;

printf("Enter Number\n");
scanf("%d", &num1);

printf("Enter Operator Sign\n");
scanf(" %c", &operatorSign);

printf("Enter Number\n");
scanf("%d", &num2);

switch(operatorSign){
 case '+': 
 result = num1 + num2;
 printf("%d + %d = %d\n", num1,num2,result);
 break;
 
 case '%':
 result =num1 % num2;
 printf("remainder of %d/%d is %d\n", num1,num2,result);
 break;

 case '-':
 result = num1 - num2;
 printf("%d - %d = %d\n", num1,num2,result);
 break;

 case '*': 
 result = num1 * num2;
 printf("%d x %d = %d\n", num1,num2,result);
 break;

 case '/': 
 result = num1 / num2;
 printf("%d / %d = %d\n", num1,num2,result);
 break;

}
    return 0;
}
#endif
