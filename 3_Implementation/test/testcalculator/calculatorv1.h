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

#endif
