#include<stdio.h>
 

void Ret(int iValue)
{
	int iCnt=0;
	for(iCnt=-iValue;iCnt<=iValue;iCnt++)
	{
		printf("%d\n",iCnt);
	}
}
int main()
{
	int iNo;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Ret(iNo);
	return 0;
}
