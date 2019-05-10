/* Written by: Noah Brayer 11/7/2013 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
short askPlay(void);
short playGame(void);
short playerChoice(void);

int main(void)
{	short win=0,play=-1;
	int plays=0,wins=0,losses=0,ties=0;
	int percent=0;
	while(play!=0)
	{	play=askPlay();
		if(play==1)
		{	win=playGame();
			if(win==1)
				wins += 1;
			else
				if(win==-1)
					losses += 1;
				else
					if(win==0)
						ties += 1;
					else
						printf("Error!");
			plays+=1;
			percent=(100*wins)/plays;
			printf("Wins:%d\n",wins);
			printf("Losses:%d\n",losses);
			printf("Ties:%d\n",ties);
			printf("Plays:%d\n",plays);
			printf("Percentage:%d\n",percent);
		}
		else
			printf("GG!");
	}
	return(0);
}
short askPlay(void)
{	char play='a';
	char retu;
	short ret=-1;
	while((play!='y')&&(play!='n'))
	{	printf("Would you like to play? (y/n)");
		scanf("%c%c",&play,&retu);
	}
	if(play=='y')
		ret=1;
	else
		ret=0;
	return(ret);
}
short playGame(void)
{	short p,c=0,win;
	char cchoice[8];
	printf("rock, paper, scissors, lizard, spock!");
	p=playerChoice();
	srand(time(NULL));
	while((c<1)||(c>5))
	{	c=(rand()%5)+1;
	}
	if(((p==1)&&((c==3)||(c==4)))||((p==2)&&((c==1)||(c==5)))||((p==3)&&((c==2)||(c==4)))||((p==4)&&((c==5)||(c==2)))||((p==5)&&((c==3)||(c==1))))
		win=1;
	else
		if(p==c)
			win=0;
		else
			win=-1;
	if(c==1)
		printf("Computer:rock\n");
	if(c==2)
		printf("Computer:paper\n");
	if(c==3)
		printf("Computer:scissors\n");
	if(c==4)
		printf("Computer:lizard\n");
	if(c==5)
		printf("Computer:spock\n");
	return(win);
}
short playerChoice(void)
{	char choice[8];
	char ret;
	short player=0;
	while(!player)
	{	printf("\nEnter choice:");
		scanf("%s%c",choice,&ret);
		if(strcmp(choice,"rock")==0)
			player=1;
		if(strcmp(choice,"paper")==0)
			player=2;
		if(strcmp(choice,"scissors")==0)
			player=3;
		if(strcmp(choice,"lizard")==0)
			player=4;
		if(strcmp(choice,"spock")==0)
			player=5;
						
	}
	return(player);
}