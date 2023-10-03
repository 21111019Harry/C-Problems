#include<stdio.h>

#define True 1
#define False 0
int Palindrome(int iValue)
{
	int iRev=0,iDigit=0,flag=False;
	if(iValue<0)
	{
		iValue=-iValue;
		flag=True;
	}
	while(iValue!=0)
	{
		iDigit=iValue%10;
		iRev=(iRev*10)+iDigit;
		iValue=iValue/10;
	}
	if(flag==True)
	{
		return -iRev;
	}
	else
		return iRev;
}
int main()
{
	int iNo=0,iRet=0;
	printf("Enter the No:");
	scanf("%d",&iNo);
	iRet=Palindrome(iNo);
	printf("%d",iRet);
/*	if(iRet==iNo)
	{
		printf("Palindrome:");
	}
	else
		printf("Not Palindrome:");*/
	return 0;
}
