#include <stdio.h>
#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

typedef enum function_status_t
{
  SUCCESS,
  unknown_input
}function_status_t;

function_status_t unit_convertorv1(int param1);

#endif
