#include<stdio.h>
//	*	1,1
//	* *	2,1 2,2 
//	* * *	3,1 3,2 3,3 
//	* * * *	4,1 4,2 4,3 4,4 
//	* * *	5,1 5,2 5,3 
//	* *	6,1 6,2 
//	*	7,1 
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((j<=iCol) && (j<=iRow+i))
			{
				printf(" *");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
int main()
{
	int iNo=0,iNo1=0;
	printf("Enter the No:");
	scanf("%d\n%d",&iNo,&iNo1);
	Pattern(iNo,iNo1);
	return 0;
}
