#include<stdio.h>


void Pattern(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==1) || (i>j))	
			{
				printf("%d\t",j);
			}
		}
		for(j=iCol;j>=1;j--)
		{
			if(i==iRow)
			{
				printf("%d\t",j);
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue = 0, iValue1 = 0;
	printf("Enter the Rowm,Col:");
	scanf("%d%d",&iValue,&iValue1);
	Pattern(iValue,iValue1);
	return 0;
}
