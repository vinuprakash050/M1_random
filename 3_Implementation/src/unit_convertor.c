

#include<stdio.h>
#include<stdlib.h>
int rd()
{
	int remainder;
	A:remainder=rand()%7;
	if(remainder==0)
		goto A;
	else
		return remainder;
}
void displaychart(int curp,char player[4])
{	int i,j,t,c,sft=0,diceres,pos1,pos2;
	
		
		if(curp==100)
		{
			printf("*****well thats it! congratulation.*****\n\n\nPlayer %s wins\n",player);
			scanf("%*s");
			exit(0);
		}
	
	for(i=10;i>0;i--)
	{
		t=i-1;
		if((sft%2)==0)
		{
			c=0;
			for(j=10;j>=1;j--)
			{
				diceres=(i*j)+(t*c++);
				
				if(curp==diceres)
					printf("%s\t",player);
				else
				printf("%d\t",diceres);
		
			}
			sft++;
		}
		else
		{
			c=9;
			for(j=1;j<=10;j++)
			{
				diceres=(i*j)+(t*c--);
				
				if(curp==diceres)
					printf("%s\t",player);
				else
					printf("%d\t",diceres);
			}
		
			
			sft++;
		}
		printf("\n\n");
	}

	

	printf("--------------------------------------------------------------------------\n");
}
int snakeladder()
{
	int i,dice,currentpos1=0,currrentpos2=0;
	char ch;
	while(1)
	{	printf("		** ok fasten your seat belts and get ready for SNAKE AND LADDER GAME** \n");
		printf("Snakes:- 25 to 9,\t 65 to 40,\t 99 to  1.\nLadder:- 13 to 42,\t 60 to 83,\t 70 to 93.\n");
		printf("Choose your option\n");
		printf("1. Player 1 plays\n");
		printf("2. Player 2 plays\n");
		printf("3. Exit\n");
		scanf("%s",&ch);	
		switch(ch)
		{
			
			case '1':dice=rd();
			system("cls");
					printf("\t\t\t\tDice = %d\n\n",dice);
					if(dice==6)
					printf("Dice=6: great! now you gained an extra chance \n");
					cur_pos1=dice+currrentpos1;
					if(cur_pos1<101){
						if(currrentpos1==99)
						{
						displaychart(1,"$P1$");//snake
						}
						if(currentpos1==65)
						{
						displaychart(40,"$P1$");//snake
						}
						if(currentpos1==25)
						{
						displaychart(9,"$P1$");//snake
						}
						if(currentpos1==70)
						{
						displaychart(93,"$P1$");//ladder
						}
						if(currentpos1==60)
						{
						displaychart(83,"$P1$");//ladder
						}
						if(currentpos1==13)
						{
						displaychart(42,"$P1$");//ladder
						}
						else{
							displaychart(currentpos1,"$P1$");
						}
						
					}
					else{
						currentpos1=currentpos1-dice;
						printf("exceeded the limits of Player 1.\n");
						displaychart(currentpos1,"$P1$");
					}
					printf("Player 2 is positioned currently in%d\n",currentpos2);
			
				break;
			case '2':dice=rd();
			system("cls");
					printf("\t\t\t\tDice = %d\n\n",dice);
					currentpos2=dice+currentpos2;
					if(currentpos2<101){
						if(currentpos2==99)	//snake
						{
						displaychart(1,"$P2$");
						}
						if(currentpos2==65)	//snake
						{
						displaychart(40,"$P2$");
						}
						if(currentpos2==25)	//snake
						{
						displaychart(9,"$P2$");
						}
						if(currentpos2==70)	//ladder
						{
						displaychart(93,"$P2$");
						}
						if(currentpos2==60)	//ladder
						{
						displaychart(83,"$P2$");
						}
						if(currentpos2==13) 	//ladder
						{
						displaychart(42,"$P2$");
						}
						else{
							displaychart(currentpos2,"$P2$");
						}
					}
						
					else{
						currentpos2=currentpos2-dice;
						printf("the limit exceeds of Player 2.\n");
						displaychart(currentpos2,"$P2$");
					}
					printf("Player 1 is positioned currently in %d\n",currentpos1);
				break;
			case '3':return 0;
				break;
			
			default:printf("Incorrect choice.Try Again\n");
			}
				
		}
		}
	

