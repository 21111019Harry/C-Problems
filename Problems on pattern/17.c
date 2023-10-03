#include<stdio.h>


//accept row no. and column no. from user and display below pattern
//i/p irow=4 icol=4 o/p A B C D		1,1 1,2 1,3 1,4
//			A B C B		2,1 2,2 2,3 2,4
//			A B C D		3,1 3,2 3,3 3,4
//			A B C D		4,1 4,2 4,3 4,4
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='A';
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='A';j<=iCol;j++)
		{
			printf(" %c\t",ch);
			ch++;
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2;
	printf("Enter the row no:");
	scanf("%d",&iValue1);
	printf("Enter the column no:");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}
