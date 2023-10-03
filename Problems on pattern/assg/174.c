#include<stdio.h>

//i/p irow=5 icol=5 o/p 1   2  3  4  5	   1,1 1,2 1,3 1,4 1,5
//			-1 -2 -3 -4 -5	   2,1 2,2 2,3 2,4 2,5
//			1   2  3  4  5	   3,1 3,2 3,3 3,4 3,5
//			-1 -2 -3 -4 -5	   4,1 4,2 4,3 4,4 4,5
//			1   2  3  4  5	   5,1 5,2 5,3 5,4 5,5
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		if((i%2)!=0)
		{
			for(j=1;j<=iCol;j++)
			{
				printf(" %d\t",j);
			}
		}
		else
		{
			for(j=1;j<=iCol;j++)
			{
				printf(" %d\t",-j);
			}
		}
		printf("\n");

	}
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter the row no:");
	scanf("%d",&iValue1);
	printf("Enter the col no:");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}
