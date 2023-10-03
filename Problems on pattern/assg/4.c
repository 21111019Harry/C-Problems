#include<stdio.h>


//i/p irow=3 icol=4 o/p * # * #
//			* # * #
//			* # * #
void Pattern(int iNo1,int iNo2)
{
	int iRow=0,iCol=0;
	for(iRow=1;iRow<=iNo1;iRow++)
	{
		for(iCol=1;iCol<=iNo2;iCol++)
		{
			if((iCol%2)==0)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}

		}
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
