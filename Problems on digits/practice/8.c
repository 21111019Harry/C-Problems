#include<stdio.h>

void Evenodd(int iValue)
{
	int iDigit=0,iEven=0,iOdd=0;
	while(iValue!=0)
	{
		if((iDigit%2)==0)
		{
			iEven=iEven+iDigit;
		}
		else
		{
			iOdd=iOdd+iDigit;
		}
	}
	printf("Even is %d",iEven);
	printf("Odd is %d",iOdd);
}
int main()
{
	int iNo=0;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Evenodd(iNo);
	return 0;
}
