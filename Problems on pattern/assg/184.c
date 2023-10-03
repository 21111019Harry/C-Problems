#include<stdio.h>

// irow=6 icol=5 o/p	* * * * *		1,1 1,2 1,3 1,4 1,5 
// 			* @ @ @ *		2,1 2,2 2,3 2,4 2,5
// 			* @ @ @ *		3,1 3,2 3,3 3,4 3,5
// 			* @ @ @ *		4,1 4,2 4,3 4,4 4,5
// 			* @ @ @ *		5,1 5,2 5,3 5,4 5,5
// 			* * * * *		6,1 6,2 6,3 6,4 6,5 
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==1) || (i==iRow) || (j==1) || (j==iCol))
			{
				printf("*\t");
			}
			else
			{
				printf("@\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int i=0,j=0;
	printf("Enter the no:");
	scanf("%d",&i);
	printf("Enter the no:");
	scanf("%d",&j);
	Pattern(i,j);
	return 0;
}
