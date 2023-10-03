#include<stdio.h>


//accept row and column frome user and display below pattern
//i/p iRow=4 iCol=5 o/p * * * * *
//			* * * * *
//			* * * * *
//			* * * * *
void Pattern(int iRow,int iCol)//yachi time complexity O(N^2) ahe karn ha nested loop ahe
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter the Row no:");
	scanf("%d",&iValue1);
	printf("Enter the Column no:");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}
