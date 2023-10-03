#include<stdio.h>

void pattern(int iRow, int Col);
int main()
{
	int i = 0, j = 0;
	printf("Enter the row no:-");
	scanf("%d",&i);
	printf("Enter the Col no:-");
	scanf("%d",&j);
	pattern(i,j);
	return 0;
}
void pattern(int iRow, int iCol)
{
	int i = 0, j = 0;
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			if(i>j)
			{
				printf(" *");
			}
			else if(i==j)
			{
				printf(" #");
			}
			else if(i<j)
			{
				printf(" &");
			}
		}
		printf("\n");
	}
}
