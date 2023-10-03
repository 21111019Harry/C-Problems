#include<stdio.h>


void Pattern(int iRow,int iCol)
{
	int i = 0, j = 0, iCnt = 1, iRev = iCol;
	for(i=1;i<=iRow;i++)
	{
		if((i%2)==0)
		{
			for(j=1;j<=iCol;j++)
			{
				printf("%d\t",iCnt);
				iCnt++;
			}
		}
		else
		{
			for(j=iCol;j>=1;j--)
			{
				printf("%d\t",iRev);
				iRev--;
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue = 0, iValue1 = 0;
	printf("Enter the Roe,Col:");
	scanf("%d%d",&iValue,&iValue1);
	Pattern(iValue,iValue1);
	return 0;
}
