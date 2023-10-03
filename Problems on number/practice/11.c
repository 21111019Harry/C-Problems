#include<stdio.h>

void Rev(int iNo)
{
	int iCnt=-iNo;
	while(iCnt<=iNo)
	{
		printf("%d\t",iCnt);
		iCnt++;
	}
}
int main()
{
	int iValue=0;
	printf("Enter the No:");
	scanf("%d",&iValue);
	Rev(iValue);
	return 0;
}
