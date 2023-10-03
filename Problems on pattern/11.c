#include<stdio.h>


//accept row no. and column no. from user and display below pattern
//i/p irow=4 icol=5 o/p 1 2 3 4 5        1,1 1,2 1,3 1,4   i mhnje row aadvi line 1111 2222 3333 4444 
//			* * * * *	 2,1 2,2 2,3 2,4   j mhnje column ubhi line 1234 1234 1234 1234
//			1 2 3 4 5	 3,1 3,2 3,3 3,4   ith irow even asla ki * print kraychy 
//			* * * * *	 4,1 4,2 4,3 4,4   aani nsla tr direct j chi value print kraychye 1234
void Pattern(int iRow,int iCol)//yachi time complexity O(N^2) ahe karn nested loop ahe aani bahircha loop 4 fitoy tr aatla loop 20 vela firtoy 
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
			
		for(j=1;j<=iCol;j++)
		{
				
			if((i%2)==0)
			{
				printf(" *\t");
			}
			else
			{
				printf(" %d\t",j);
			}
		}
		printf("\n");
	}
}
void Patternx(int iRow,int iCol)//ya function cha exicution time kami ahe karn ith if else chi condi 4 velesch check hotey vrchya function madhe ti 20 veles check hotey pn yachi complexity aani vrchya function chi complexity same ahe
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		if((i%2)==0)
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
				printf(" %d\t",j);
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	int iValue3=0,iValue4=0;
	////////////////////////////////////
	printf("Enter the row no:");
	scanf("%d",&iValue1);
	printf("Enter the column no:");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	//////////////////////////////////
	printf("Enter the Row no:");
	scanf("%d",&iValue3);
	printf("Enter the Column no:");
	scanf("%d",&iValue4);
	Patternx(iValue3,iValue4);
	return 0;
}
