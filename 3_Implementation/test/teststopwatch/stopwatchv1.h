#include <stdio.h>
#ifndef _STOPWATCH_H_
#define _STOPWATCH_H_

typedef enum function_status_t
{
  SUCCESS,
  seconds_exceed_60,
  minutes_exceed_60,
  isnegative
}function_status_t;

function_status_t stopwatchv1(int param1,int param2,int param3);

#endif
