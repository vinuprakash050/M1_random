#include<stdio.h>

#define CANDIDATE_COUNT

#define LEADER1 "modison_jii"
#define LEADER2 "MOMoa"
#define LEADER3 "Siiimon"
#define LEADER4 "jason_stalin"

int voteCount1=0, voteCount2=0, voteCount3=0, voteCount4=0, wastedvotes=0;

void castVote(){
int choice;    
printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n 1. %s", LEADER1);
printf("\n 2. %s", LEADER2);
printf("\n 3. %s", LEADER3);
printf("\n 4. %s", LEADER4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d",&choice);

switch(choice){
    case 1: voteCount1++; break;
    case 2: voteCount2++; break;
    case 3: voteCount3++; break;
    case 4: voteCount4++; break;
    case 5: wastedvotes++; break;
    default: printf("\n Error: choose a correct Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n thanks for showing your interest on voting !!");
}

void votesCount(){
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", LEADER1, voteCount1);
printf("\n %s - %d ", LEADER2, voteCount2);
printf("\n %s - %d ", LEADER3, voteCount3);
printf("\n %s - %d ", LEADER4, voteCount4);
printf("\n %s - %d ", "Spoiled Votes", wastedvotes); 
}

void getLeadingCandidate(){
    printf("\n\n  #### the winning Candiate is####\n\n");
    if(voteCount1>voteCount2 && voteCount1>voteCount3 && voteCount1 >voteCount4)
    printf("[%s]",LEADER1);
    else if (voteCount2>voteCount3 && voteCount2>voteCount4 && voteCount2 >voteCount1)
    printf("[%s]",LEADER2);
    else if(voteCount3>voteCount4 && voteCount3>voteCount2 && voteCount3 >voteCount1)
    printf("[%s]",LEADER3);
    else if(voteCount4>voteCount1 && voteCount4>voteCount2 && voteCount4 >voteCount3)
    printf("[%s]",LEADER4);
    else
    printf("----- Warning !!! No one will win----");    
    
    
    
}

int votemachine()
{
int choice;

do{
printf("\n\n ###### Welcome to Election/Voting 2019 #####");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find the count of votes");
printf("\n 3. Find the Leader with lead");
printf("\n 0. Exit");

printf("\n\n Enter any 1 from the above choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Not a correct choice");
}
}while(choice!=0);

//hold the screen
getchar();

return 0;
}
