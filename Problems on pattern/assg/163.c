#include<stdio.h>

//i/p irow=3 icol=5  o/p A A A A A	1,1 1,2 1,3 1,4 1,5
//		         B B B B B	2,1 2,2 2,3 2,4 2,5
//		         C C C C C	3,1 3,2 3,3 3,4 3,5
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='A',ch1='B',ch2='C';
	for(i=1;i<=iRow;i++)
	{
		if(i==1)
		{
			for(j=1,ch='A';j<=iCol;j++)
			{
				printf(" %c\t",ch);
			}
		}
		else if(i==2)
		{
			for(j=1,ch1='B';j<=iCol;j++)
			{
				printf(" %c\t",ch1);
			}
		}
		else
		{
			for(j=1,ch2='C';j<=iCol;j++)
			{
				printf(" %c\t",ch2);
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
