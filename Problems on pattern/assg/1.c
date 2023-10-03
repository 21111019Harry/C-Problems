#include<stdio.h>

int  Accept(int iNo,int iNo1)
{
	int iRow=0,iCol=0;
	for(iRow=1;iRow<=iNo;iRow++)
	{
		for(iCol=1;iCol<=iNo1;iCol++)
		{
			printf("  *\t");
		}
		printf("\n");
	}

}
int main()
{
	int iValue=0,iRet=0,iValue1=0;
	printf("Enter the Row no:");
	scanf("%d",&iValue);
	printf("Enter the Column no:");
	scanf("%d",&iValue1);
	Accept(iValue,iValue1);
	return 0;
}
