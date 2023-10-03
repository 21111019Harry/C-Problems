#include<stdio.h>



//accept no from user and count all such digits which are divisible by 3
//i/p 369 o/p 3,i/p 311 o/p 1,i/p 1526 o/p 1 he 2nd function che i/p o/p ahet
void EvenDigit(int iNo)//he function i/p madhla even no find kraysathi ahe
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)
	{
		printf("1\n");
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			printf("%d\n",iDigit);
		}
		iNo=iNo/10;
		
	}
}
int Divisible(int iNo)//he function i/p madhe jya digit la 3,6,9 ne bhag jato ashe digit find kraysathi ahe
{
	int iDigit=0,iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit==3) || (iDigit==6) ||(iDigit==9))
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue=0,iValue1=0,iRet=0;
	///////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue);
	EvenDigit(iValue);
	////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue1);
	iRet=Divisible(iValue1);
	printf("%d is divisibl by %d",iRet,iValue1);
	
	return 0;
}
