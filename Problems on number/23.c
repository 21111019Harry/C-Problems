#include<stdio.h>


//ha pn prime factor print kraycha program ahe pn ha ekdam shortcut ahe direct return madhe loop lihun o/p return kraych main la
#define True 1;
#define False 0;
typedef int bool;
bool PrimeFactor(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if((iNo==1) || (iNo==0))
	{
		return False;
	}
	return  
		for(iCnt=iNo/2;((iCnt>1) && (iNo%iCnt)!=0);iCnt--);

}
int main()
{
	int iValue=0;
	bool iRet=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=PrimeFactor(iValue);
	if(iRet==1)
	{
		printf("%d is prime no:",iValue);
	}
	else
	{
		printf("%d is not prime no:",iValue);
	}
	return 0;
}
