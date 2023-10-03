#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{

			if(j>i)
			{
				printf(" @");
			}
			else if(i==j)
			{
				printf(" $");
			}
			else if(i>j)
			{
				printf(" #");
			}
		/*	else if(j>i)
			{
				printf(" #");
			}*/

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
