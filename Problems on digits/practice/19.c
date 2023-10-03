#include<stdio.h>

void Rev(int iNo)
{
	int iCnt=0,irev=0,iDigit=0;
	for(iCnt=1;iNo>0;iCnt++)
	{
		iDigit=iNo%10;
		irev=irev+iDigit;
		printf("%d\t",iDigit);
		iNo=iNo/10;
	}
	printf("%d",irev);
}
int main()
{
	int iValue=0;
	printf("Enter the No:");
	scanf("%d",&iValue);
	Rev(iValue);
	return 0;
}

