#include<stdio.h>


//i/p irow=4 icol=4 o/p A B C D		1,1 1,2 1,3 1,4
//			a b c d		2,1 2,2 2,3 2,4
//			A B C D		3,1 3,2 3,3 3,4
//			a b c d		4,1 4,2 4,3 4,4
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='A',ch1='a';
	for(i=1;i<=iRow;i++)
	{
		if((i%2)!=0)
		{
			for(j=1,ch='A';j<=iCol;j++)
			{
				printf(" %c\t",ch);
				ch++;
			}
		}
		else
		{
			for(j=1,ch1='a';j<=iCol;j++)
			{
				printf(" %c\t",ch1);
				ch1++;
			}
			
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter the row no:");
	scanf("%d",&iValue1);
	printf("Enter the Column no:");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}
