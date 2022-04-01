#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>    
#include"stopwatchv1.h"              //for linux user use this
#define CYCLE 60
//#define sleep(x) Sleep(x*1000)    //for windows user use this
function_status_t stopwatchv1(int param1,int param2,int param3)
{
if (param2>60)
{
return minutes_exceed_60;
}
if(param3>60)
{
return seconds_exceed_60;
}
if(param1<0||param2<0||param3<0)
{
return isnegative;
}
return SUCCESS;
}
int stopwatch()
{
    int hour, minute, second;
    int h = 0, m = 0, s = 0;
    printf("Enter hour: \n");
    
    scanf("%d", &hour);
    printf("Enter minute: \n");
    scanf("%d", &minute);
    printf("Enter second: \n");
    scanf("%d", &second);

    while(1)
    {
        printf("\n\n---------------DIGITAL STOP WATCH------------------\n\n");
        printf("                    %.2d:%.2d:%.2d\n                 \n", h, m, s);
        printf("###################################################\n");

        if(h == hour && m == minute && s == second)
        {
            break;
        }
        else
        {
            system("cls");
        }
        s++;
        sleep(1);
        if(s == CYCLE)
        {
            m++;
            s = 0;
        }
        if(m == CYCLE)
        {
            h++;
            m = 0;
        }

    }

    return 0;

}
