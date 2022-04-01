#include<stdio.h>
#include"inc/unit_convertor.h"
#include"inc/vote.h"
#include"inc/calculator.h"
#include"inc/stopwatch.h"
int snakeladder();
int votemachine();
int calculator();
int stopwatch();
int main()
{
    int n=0;
    while(n!=5)
    {
    printf("1.snake and ladder\n");
    printf("2.voting machine\n");
    printf("3.calculator\n");
    printf("4.stopwatch\n");
    printf("5.Exit\n");
    printf("CHOOSE FROM THE LIST OF PROCESSES FROM ABOVE THAT YOU WANT PERFORM:");
    scanf("%d",&n);
    if(n==1)
    {
        snakeladder();
    }
    else if(n==2)
    {
        votemachine();
    }
    else if (n==3)
    {
        calculator();
    }
    else if (n==4)

    {
        stopwatch();
    }
    else if(n==5)
    {
        printf("thank you for using the application\n");
    }
    else
    {
        printf("invalid input\n");
    }
    }
}
