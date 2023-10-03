#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='A';
	for(i=1;i<=iRow;i++)
	{
		if((i%2)==0)
		{
			for(j=1;j<=iCol;j++)
			{
				printf(" %d",j);
			}
		}
		else
		{
			for(j=1,ch='A';j<=iCol;j++)
			{
				printf(" %c",ch);
				ch++;
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
