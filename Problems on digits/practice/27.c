#include<stdio.h>
#include<stdbool.h>

int Palindrome(int iNo)
{
	int iDigit = 0 , iRev = 0 ;
	bool flag=false;
	if(iNo<0)
	{
		iNo=-iNo;
		flag=true;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	if(flag==true)
	{
		return -iRev;
	}
	else
		return iRev;
}
int main()
{
	int iValue = 0,iRet = 0;
	printf("Enter the NO:");
	scanf("%d",&iValue);
	iRet=Palindrome(iValue);
	if(iRet==iValue)
	{
		printf("Palindrome:");
	}
	else
		printf("NOT:");
	return 0;
}
