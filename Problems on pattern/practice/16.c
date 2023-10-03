#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0,iNew=1;
	char ch='a';
	for(i=1;i<=iRow;i++)
	{
/*		if((i%2)==0)
		{
			for(j=1;j<=iCol;j++)
			{
				printf(" %c\t",ch);
				ch++;
			}
		}
		else
		{
			for(j=1;j<=iCol;j++)
			{
				printf(" %d\t",iNew);
				iNew++;
			}
		}*/
		for(j=1;j<=iRow;j++)
		{
			if((i%2)==0)
			{
				printf(" %c\t",ch);
				ch++;
			}
			else
			{
				printf(" %d\t",iNew);
				iNew++;
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
