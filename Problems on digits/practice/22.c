#include<stdio.h>

//369 3, 311 3
void Check(int iNo)
{
	int iDigit=0,iSum=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%3)==0)
		{
			printf("%d",iDigit);
		}
		iNo=iNo/10;
	}
}
int main()
{
	int iValue=0;
	printf("Enter the NO:");
	scanf("%d",&iValue);
	Check(iValue);
	return 0;
}

