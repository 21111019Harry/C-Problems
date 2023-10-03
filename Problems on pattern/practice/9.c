#include<stdio.h>


void Pattern(int iValue,int iValue1)
{
	int iRow=0,iCol=0;
	for(iRow=1;iRow<=iValue;iRow++)
	{
		for(iCol=1;iCol<=iValue1;iCol++)

			if((iRow%2)!=0)
			{
				printf(" %d ",iCol);
				
			}
			else
			{
				printf(" * ");
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
