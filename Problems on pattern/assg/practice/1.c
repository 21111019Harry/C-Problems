#include<stdio.h>

//irow=5 o/p          *		 1,1 1,2 1,3 1,4 1,5 1,6 1,7 1,8 1,9	
//icol=9 	    * * *	 2,1 2,2 2,3 2,4 2,5 2,6 2,7 2,8 2,9
//   		  * * * * *	 3,1 3,2 3,3 3,4 3,5 3,6 3,7 3,8 3,9
// 		* * * * * * *	 4,1 4,2 4,3 4,4 4,5 4,6 4,7 4,8 4,9
// 	      * * * * * * * * *	 5,1 5,2 5,3 5,4 5,5 5,6 5,7 5,8 5,9
// 	  

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{

			if((j==iCol/2) || (i==iRow))
			{
				printf("*");
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
	int i=0,j=0;
	printf("Enter ther no:");
	scanf("%d",&i);
	printf("Enter the no:");
	scanf("%d",&j);
	Pattern(i,j);
	return 0;
}

/*
void Pattern(int iRow)
{
	int i=0,j=0,k=0;
	int m=iRow;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=m-1;j++)
		{
			printf(" ");
		}
	
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		m--;
		printf("\n");
	}
}
void PatternX(int iRow)
{
	int i=0,j=0,k=0;
	int m=1;
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<m;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		m++;
		printf("\n");
	}
}
int main()
{
	int i=0,j=0;
	printf("Enter the no:");
	scanf("%d",&i);
//	printf("Enter the no:");
//	scanf("%d",&j);
	Pattern(i);
	////////////////////////////
	int x=0;
	printf("Enter the no:");
	scanf("%d",&x);
	PatternX(x);
	return 0;
}
*/

