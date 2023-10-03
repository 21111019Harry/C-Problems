#include<stdio.h>


//irow=4 icol=4 o/p 	* * * *   1,1 1,2 1,3 1,4
//			* * * #	  2,1 2,2 2,3 2,4
//			* * # #   3,1 3,2 3,3 3,4
//			* # # #   4,1 4,2 4,3 4,4
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			if(i<=j)
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int i=0,j=0;
	printf("Enter the no:");
	scanf("%d",&i);
	printf("Enter the no:");
	scanf("%d",&j);
	Pattern(i,j);
	return 0;
}
