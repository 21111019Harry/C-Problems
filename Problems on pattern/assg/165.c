#include<stdio.h>

//i/p irow=3 icol=4 o/p 1  2  3  4
//			5  6  7  8
//			9 10 11 12
void Pattern(int iRow,int iCol)
{
	int i=0,j=0,iCnt=1;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf(" %d\t",iCnt);
			iCnt++;
		}
		printf("\n");
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
