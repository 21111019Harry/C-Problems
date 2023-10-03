#include<stdio.h>


// irow=5 icol=5 o/p	$ * * * *	1,1 1,2 1,3 1,4 1,5
// 			* $ * * *	2,1 2,2 2,3 2,4 2,5
// 			* * $ * *	3,1 3,2 3,3 3,4 3,5
// 			* * * $ *	4,1 4,2 4,3 4,4 4,5
// 			* * * * $	5,1 5,2 5,3 5,4 5,5

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i==j)
			{
				printf("$\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");

	}
}
//ya fun ch o/p he vrchya fun chya excat ult ahe 
//o/p * * * * $
//    * * * $ *
//    * * $ * *
//    * $ * * *
//    $ * * * *   as o/p ya fun mule yeil
void PatternX(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			if(i==j)
			{
				printf("$\t");
			}
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
	//////////////////////////
	printf("Enter the no:");
	scanf("%d",&i);
	printf("Enter the no:");
	scanf("%d",&j);
	Pattern(i,j);
	///////////////////////////
	int x=0,y=0;
	printf("Enter the no:");
	scanf("%d",&x);
	printf("Enter the no:");
	scanf("%d",&y);
	PatternX(x,y);
	return 0;
}
