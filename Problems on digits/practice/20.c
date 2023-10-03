#include<stdio.h>


void Compair(int iNo)
{
	int iCnt=0,iSum=0,iDigit=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)!=0)
		{
			iSum=iSum+iDigit;
		}
		iNo=iNo/10;
	}
	printf("%d",iSum);
}
int main()
{
	int iValue=0;
	printf("Enter the NO:");
	scanf("%d",&iValue);
	Compair(iValue);
	return 0;

}
