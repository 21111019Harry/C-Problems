#include<stdio.h>

void Product(int iNo)
{
	int iDigit=0,iMult=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iMult==0)
		{
			iMult=1;
		}
		iMult=iMult*iDigit;
		iNo=iNo/10;
	}
	printf("%d",iMult);
}
int main()
{
	int iValue=0;
	printf("Enter the NO:");
	scanf("%d",&iValue);
	Product(iValue);
	return 0;
}


