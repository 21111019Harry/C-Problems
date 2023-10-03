#include<stdio.h>

//accept row no. and column no. and display below pattern
//i/p irow=5  icol=4  o/p * * * *	1,1 1,2 1,3 1,4
//			  $ $ $ $	2,1 2,2 2,3 2,4
//			  $ $ $ $	3,1 3,2 3,3 3,4
//			  $ $ $ $	4,1 4,2 4,3 4,4
//			  * * * *	5,1 5,2 5,3 5,4
void Pattern(int iRow,int iCol)//ya function cha exicution time kami ahe karn aapn if else chi condi hi outer loop madhe lihili ahe aani ti condi fkt 5 velesch check hoil yachi complexity aani khalchya function chi complexity hi same ahe O(N^2) complextiy madhe kahi frk padt nahi fkt exicution time kami hoto jr if else chi condi outer loop madhe lihili tr
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		if((i==1) || (i==iRow))
		{
			for(j=1;j<=iCol;j++)
			{
				printf(" *\t");
			}
		}
		else
		{
			for(j=1;j<=iCol;j++)
			{
				printf(" $\t");
			}
		}
		printf("\n");
	}
}
void Patternx(int iRow,int iCol)//ya function cha exicution time jast ahe karn inner loop madhli if else chi condi hi 20 veles check honar ahe 
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==1) || (i==iRow))
			{
				printf(" *\t");
			}
			else
			{
				printf(" $\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	int iValue3=0,iValue4=0;
	//////////////////////////////
	printf("Enter the row no:");
	scanf("%d",&iValue1);
	printf("Enter the column no:");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	/////////////////////////////
	printf("Enter the row no:");
	scanf("%d",&iValue3);
	printf("Enter the col no:");
	scanf("%d",&iValue4);
	Patternx(iValue3,iValue4);
	return 0;
}
