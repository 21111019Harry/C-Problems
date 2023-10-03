#include<stdio.h>

//acept no. from user and return its revers no. which only contain its odd digits.
//i/p 135 o/p 531 i/p 2466 o/p 0 i/p 2435 o/p 53 i/p 1674 o/p 71 i/p 3566 o/p 53 i/p 3007 o/p 73
int OddReverse(int iNo)//he function i/p madhle odd digit reverse krun det
{
	int iDigit=0,iRev=0,iOdd=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)!=0)
		{
			iRev=(iRev*10)+iDigit;
		}
/*		else//ith ya function madhe aapn i/p madhle odd digit reverse krun print kru shkto tyasathi dusr function lihaychi garj nahiye fkt he else chi condi takaychi karn yat sgle odd digit yetil aani iOdd print krun dyacha pn mg aapl function void yeil karn aapn tevha kahich return krnar nahi even,odd digit direct print kru mg function chya khalch return iRev pn yenar nahi aani main function madhe aapn call kela ahe tith iRet pn yenar nahi 
		{
			iOdd=(iOdd*10)+iDigit;
		}*/
		iNo=iNo/10;
	}
//	printf("%d is odd digit revers. %d is even digit revers.\n",iRev,iOdd);
	return iRev;
}
int EvenReverse(int iNo)//he function i/p madhle even digit reverse krun det
{
	int iDigit=0,iRev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iRev=(iRev*10)+iDigit;
		}
		iNo=iNo/10;
	}
	return iRev;
}
int main()
{
	int iValue=0,iRet=0;
	int iValue1=0,iRet1=0;
	//////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue);
  	iRet=OddReverse(iValue);
	printf("The odd digit reverse of %d\n",iRet);
	///////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue1);
	iRet1=EvenReverse(iValue1);
	printf("The even digit reverse of %d\n",iRet1);
	return 0;
}
