#include<stdio.h>




void Product(int iValue)
{
	int iDigit=0,iMult=0;
	while(iValue>0)
	{
		iDigit=iValue%10;
		if((iDigit%2)==0)
		{
			if(iMult=0)
			{
				iMult=1;
			}
			iMult=iMult*iDigit;
		}
	}
	printf("%d",iMult);
}
int main()
{
	int iNo=0;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Product(iNo);
	return 0;
}
