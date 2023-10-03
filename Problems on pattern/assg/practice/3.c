#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			if((i<j))
			{
				printf("*\t");
			}
			else if(i==j)
			{
				printf(" \t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue = 0, iValue1 = 0;
	printf("Enter the NO:");
	scanf("%d%d",&iValue,&iValue1);
	Pattern(iValue,iValue1);
	return 0;
}
