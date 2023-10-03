#include<stdio.h>

void Mult(int iNo)
{
	int iCnt=0,iDigit=0,iMult=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
			if(iMult==0)
			{
				iMult=1;
			}
			if((iDigit%2)!=0)
			{
				iMult=iDigit*iMult;
			}
		iNo=iNo/10;
	}
	printf("%d",iMult);
}
int main()
{
	int iValue=0;
	printf("Enter the NO:");
	scanf("%d",&iValue);
	Mult(iValue);
	return 0;
}
