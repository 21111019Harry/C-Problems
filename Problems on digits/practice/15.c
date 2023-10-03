#include<stdio.h>


int Palindrome(int iValue)
{
	int iDigit=0,iRev=0;
	while(iValue>0)
	{
		iDigit=iValue%10;
		iRev=(iRev*10)+iDigit;
		iValue=iValue/10;
	}
	return iRev;
}
int main()
{
	int iNo=0,iRet=0;
	printf("Enter the No:");
	scanf("%d",&iNo);
	iRet=Palindrome(iNo);
	if(iRet==iNo)
	{
		printf("Palindrome:");
	}
	else
		printf("Not Palindrome:");
	return 0;
}
