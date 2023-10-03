#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='A';
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='A';j<=iCol;j++)
		{
			if((i==1) || (i==iRow) || (j==1) || (j==iCol))
			{
				printf(" %c",ch);
				ch++;
			}
			else if((i==2) || (i==iRow-1) || (j==2) || (j==iCol-1))
			{
				printf(" %d",j);
			}
			else if((i==3) || (j==3) || (i==iRow-2) || (j==iCol-2)) 
			{
				printf(" $");
			}
			else
			{
				printf(" #");
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
