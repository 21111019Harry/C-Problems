#include<stdio.h>


void Pattern(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",i);
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
