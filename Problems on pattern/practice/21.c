#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i=1;i<=iRow;i++)
	{
		if((i%2)!=0)
		{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",j);
		}
		}
		else
		{
			for(j=iCol;j>=1;j--)
			{
				printf("%d\t",j);
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue = 0, iValue1=0; 
	printf("Enter the ROW,COL:");
	scanf("%d%d",&iValue,&iValue1);
	Pattern(iValue,iValue1);
	return 0;
}
