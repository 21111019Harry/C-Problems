#include<stdio.h>

int Revr(int ipt);
#define True 1
#define False 0
int Digit(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iCnt=Revr(iNo);
	if(iCnt==iNo)
	{
		return True;
	}
	else
		return False;

	
}
int Revr(int ipt)
{

	int iDigit=0,iRev=0;
        if(ipt<0)
	{
		ipt=-ipt;
	}
	while(ipt>0)
	{	
		iDigit=ipt%10;
		iRev=(iRev*10)+iDigit;
		ipt=ipt/10;
	}
	return iRev;
}


int main()
{
	int i=0,j=0,iRet=0;
	printf("Enter the no:");
	scanf("%d",&i);
      	iRet=Digit(i);
	if(iRet==True)
	{
		printf("The no is Palindrome");
	}
	else
		printf("The no is not Palindrome");
	return 0;
}
