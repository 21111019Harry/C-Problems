#include<stdio.h>



void Total(int iNo)
{
	int iCnt=0,iDigit=0,iEven=0,iOdd=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
		//	iEven=iEven+iDigit;
			iCnt++;
		}
		else
		{
		//	iOdd=iOdd+iDigit;
			iCnt--;
		}
		iNo=iNo/10;
	}
	if(iCnt==0)
	{
		printf("Same\t");
	}
	else
		printf("NO\t");

	printf("%d",iCnt);
}
int main()
{
	int iValue=0;
	printf("Enter the NO:");
	scanf("%d",&iValue);
	Total(iValue);
	return 0;
}
