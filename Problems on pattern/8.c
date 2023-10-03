#include<stdio.h>


//accept no. from user and display below pattern
//i/p 4 o/p 1234****4321 i/p 
//he as o/p aal pahije mhnun aapn Pattern1 function ghetl ahe
//i/p 4 o/p 1234****321***21**1* i/p 3 o/p 123***21**1*
void Pattern(int iNo)//yachi complexcity O(3N) ahe karn ha 3 veles firtoy mhnje 1 loop 1 veles 1st time 1 to 4 2nd time 1 to 4 veles * print krtoy 3rd time ult 4 to 1 
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d",iCnt);
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*");
	}
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d",iCnt);
	}
	printf("\n");
}
void Pattern1(int iNo)//te je dusr i/p ahe te ya function madhun yeil
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d",iCnt);
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*");
	}
	for(iCnt=iNo-1;iCnt>=1;iCnt--)
	{
		printf("%d",iCnt);
	}
	for(iCnt=1;iCnt<=iNo-1;iCnt++)
	{
		printf("*");
	}
	for(iCnt=iNo-2;iCnt>=1;iCnt--)
	{
		printf("%d",iCnt);
	}
	for(iCnt=1;iCnt<=iNo-2;iCnt++)
	{
		printf("*");
	}
}

int main()
{
	int iValue=0,iValue1=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	Pattern(iValue);
	printf("Enter the no:");
	scanf("%d",&iValue1);
	Pattern1(iValue1);
	return 0;
}
