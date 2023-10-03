#include<stdio.h>


//irow=4 icol=4 o/p	1 2 3 4		1,1 1,2 1,3 1,4
//			1 * * 4		2,1 2,2 2,3 2,4		
//			1 * * 4		3,1 3,2 3,3 3,4
//			1 2 3 4		4,1 4,2 4,3 4,4

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		//ith j==1 || j==iCol he ghyaychya evji kahli navin else if madhe gheu shkto
		for(j=1;j<=iCol;j++)
		{
			if((i==1) || (i==iRow) || (j==1) || (j==iCol))
			{
				printf("%d\t",j);
			}
		/*	else if((j==1) || (j==iCol))
			{
				printf("%d\t",j);
			}*/
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
//he fun vrchya fun ch ult o/p det
//o/p 	1 * * 4
//	1 2 3 4
//	1 2 3 4
//	1 * * 4  as o/p det	
void PatternX(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==2) || (i==3) || (j==1) || (j==iCol))
			{
				printf("%d\t",j);
			}
		/*	else if((j==1) || (j==iCol))
			{
				printf("%d\t",j);
			}*/
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int i=0,j=0;
	////////////////////////
	printf("Enter the no:");
	scanf("%d",&i);
	printf("Enter the no:");
	scanf("%d",&j);
	Pattern(i,j);
	//////////////////////////
	int x=0,y=0;
	printf("Enter the no:");
	scanf("%d",&x);
	printf("Enter the no:");
	scanf("%d",&y);
	PatternX(x,y);
	return 0;
}
