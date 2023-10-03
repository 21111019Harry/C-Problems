#include<stdio.h>


//accept row no and col no frome user and display below pattern
// iRow=5 iCol=5 o/p	* * * * *	1,1 1,2 1,3 1,4 1,5
// 			* * 0 0	*	2,1 2,2 2,3 2,4 2,5 
// 			* 0 * 0	*	3,1 3,2 3,3 3,4 3,5
// 			* 0 0 * *	4,1 4,2 4,3 4,4 4,5
// 			* * * * *	5,1 5,2 5,3 5,4 5,5

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	if(iRow!=iCol)//he filter ahe ki je squre matrix ahe ki nahi te check krty karn jr iRow iCol same nsle tr ha pattern banuch shkt nahi 
	{
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{

			if((i==1) || (i==iRow) || (j==1) || (j==iCol) || (i==j))
			{
				printf("*\t");
			}
			else
			{
				printf("0\t");
			}

		}
		printf("\n");
	
	}

}
int main()
{
	int i=0,j=0,iRet=0;
	printf("Enter the no:");
	scanf("%d",&i);
	printf("Enter the no:");
	scanf("%d",&j);
	Pattern(i,j);
	return 0;
}
