#include <stdio.h>
int getStats(short,char[],int[]);
void calcStats(int,char[],int[]);
void printStats(int[]);
short main(void)
{	char ret;
	short player;
	char array[30];
	int count;
	int stats[10];
	do
	{	printf("Enter player's number:");
		scanf("%hd%c",&player,&ret);
		count=getStats(player,array,stats);
		calcStats(count,array,stats);
		printStats(stats);
	}while(player>=0);
	return(1);
}
int getStats(short player,char array[],int stats[])
{	char ret;
	int count=2;
	short first,second;
	first=player/10;
	second=player%10;
	array[0]=(char)first;
	array[1]=(char)second;
	stats[0]=player;
	printf("\nhit=h, walk=w, hit by pitch=p, error=e, strikeout=k, out=o");
	do
	{	printf("\nEnter stat or 'x' to exit:");
		scanf("%c%c",array[count],ret);
		count++;
	}while(((array[count]=='h')||(array[count]=='w')||(array[count]=='k')||(array[count]=='o')||(array[count]=='p')||(array[count]=='e'))&&(count<30));
	return(count);
}
void calcStats(int count,char array[],int stats[])
{	char stat;
	short i;
	double bat, slug;
	for(i=2;i<count;i++)
	{	stat=array[i];
		switch(stat)
		{	case 'h':
				stats[1]++;
				break;
			case 'w':
				stats[2]++;
				break;
			case 'p':
				stats[3]++;
				break;
			case 'e':
				stats[4]++;
				break;
			case 'k':
				stats[5]++;
				break;
			case 'o':
				stats[6]++;
				break;
			default:
				printf("\nNot a valid entry");
		}
		stats[10]++;
	}
}
void printStats(int stats[])
{	short i;
	double bat,slug;
	printf("Player %d:",stats[0]);
	bat=(double)stats[1]/(double)stats[10];
	slug=((double)stats[1]+(double)stats[2]+(double)stats[3])/((double)stats[10]);
	printf("\nBatting Average: %lf",bat);
	printf("\nSlugging Average: %lf",slug);
}
	