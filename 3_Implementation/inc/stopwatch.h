#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#define CYCLE 60


int stopwatch()
{
    int hr, min, sec;
    int h = 0, m = 0, s = 0;
    printf("Enter hour: \n");
    scanf("%d", &hr);
    printf("Enter minute: \n");
    scanf("%d", &min);
    printf("Enter second: \n");
    scanf("%d", &sec);

    while(1)
    {
        printf("\n\n**************DIGITAL STOP WATCH**************\n\n");
        printf("                    %.2d:%.2d:%.2d\n                 \n", h, m, s);
        printf("____________________________________________________\n");

        if(h == hr && m == min && s == sec)
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
