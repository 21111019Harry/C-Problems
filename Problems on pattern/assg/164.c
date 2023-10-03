#include<stdio.h>


//i/p  irow=4 icol=5 o/p 4 4 4 4 4	1,1 1,2 1,3 1,4 1,5
//			 3 3 3 3 3	2,1 2,2 2,3 2,4 2,5 
//			 2 2 2 2 2	3,1 3,2 3,3 3,4 3,5
//			 1 1 1 1 1 	4,1 4,2 4,3 4,4 4,5

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=iRow;i>=1;i--)//yachi complexity O(N^2) ahe karn ha nested loop ahe 
	{
		if((i%2)==0)
		{
			for(j=1;j<=iCol;j++)
			{
				printf(" %d\t",i);
			}
		}
		else
		{
			for(j=1;j<=iCol;j++)
			{
				printf(" %d\t",i);
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
	printf("Enter the column no:");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}
