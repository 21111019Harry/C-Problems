#include<stdio.h>



void Pattern(int iRow,int iCol)
{
	int i = 0, j= 0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((j%2)==0)
			{
				printf("*\t");
			}
			else
				printf("#\t");
		}
		printf("\n");
	}
}
int main()
{
	int iValue = 0, iValue1=0;
	printf("Enter the Row,Col:");
	scanf("%d%d",&iValue,&iValue1);
	Pattern(iValue,iValue1);
	return 0;
}
