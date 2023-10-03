#include<stdio.h>


void Odd(int iNo)
{
	int iDigit = 0, iMult = 0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)!=0)
		{
			if(iMult==0)
			{
				iMult=1;
			}
			iMult=iMult*iDigit;
		}
		iNo=iNo/10;
	}
	printf("%d",iMult);
}
int main()
{
	int iValue=0;
	printf("Enter the No:");
	scanf("%d",&iValue);
	Odd(iValue);
	return 0;
}
