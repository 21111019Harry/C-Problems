#include<stdio.h>


//i/p irow=4 icol=4 o/p  1 1 1 1 
//			 2 2 2 2
//			 3 3 3 3
//			 4 4 4 4
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
	//	if((i%2)!=0)
		{
			for(j=1;j<=iCol;j++)
			{
				printf(" %d\t",i);
			}
		}
/*		else
		{
			for(j=1;j<=iCol;j++)
			{
				printf(" %d\t",i);
			}

		}*/
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter the Row:");
	scanf("%d",&iValue1);
	printf("Enter the Column:");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}
