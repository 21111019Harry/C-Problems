#include<stdio.h>



int  Digit(int iNo)
{
	int iCnt=0;
	if(iNo==0)
	{
		printf("1");
		return 0;
	}
	while(iNo>0)
	{
		iCnt++;
		iNo=iNo/10;
	}
	printf("%d",iCnt);
}
int main()
{
	int iValue=0;
	printf("Enter the No:");
	scanf("%d",&iValue);
	Digit(iValue);
	return 0;
}
