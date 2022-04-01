#include <stdio.h>
#include "unity.h"
#include"calculatorv1.h"
int carun(int,int,char);
function_status_t calculatorv1(int param1,int param2,char sign,int* result)
{
long int answ;
answ = carun(param1,param2,sign);
if (answ>INT_MAX)
{
return OVERFLOW;
}
if(answ<INT_MIN)
{
return UNDERFLOW;
}
*result=answ;
return SUCCESS;
}


int calculator() {
    int num1,num2;
    char operatorsign;
    int ans;

printf("Enter Number\n");
scanf("%d", &num1);

printf("Enter Operator Sign\n");
scanf(" %c",&operatorsign);

printf("Enter Number\n");
scanf("%d", &num2);
ans = carun(num1,num2,operatorsign);
}

int carun(int numm1,int numm2,char operatorsignn)
{
 int result;
 switch(operatorsignn){
 case '+': 
 result = numm1 + numm2;
 return result;
 break;
 
 case '%':
 result =numm1 % numm2;
return result;
 break;

 case '-':
 result = numm1 - numm2;
 return result;
 break;

 case '*': 
 result = numm1 * numm2;
 return result;
 break;

 case '/': 
 result = numm1 / numm2;
 return result;
 break;

}
    return 0;
}

