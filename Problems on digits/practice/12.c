#include<stdio.h>


void Rev(int iValue)
{
	int iDigit=0,iRev=0;
	while(iValue!=0)
	{
		iDigit=iValue%10;
		iRev=(iRev*10)+iDigit;
		iValue=iValue/10;
	}
	printf("%d",iRev);
}
int main()
{
	int iNo=0;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Rev(iNo);
	return 0;
}
