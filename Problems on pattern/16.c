#include<stdio.h>

//accept row no. and column no. from user and display below pattern
//i/p irow=4 icol=4 o/p * * * *		1,1 1,2 1,3 1,4
//			* $ $ *		2,1 2,2 2,3 2,4
//			* $ $ *		3,1 3,2 3,3 3,4
//			* * * *		4,1 4,2 4,3 4,4
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==1) || (i==iRow) || (j==1) || (j==iCol))
			{
				printf(" *\t");
			}
			else
			{
				printf(" $\t");
			}
		}
		printf(" \n");
	}

}
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter the row no:");
	scanf("%d",&iValue1);
	printf("Enter the column no:");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}
