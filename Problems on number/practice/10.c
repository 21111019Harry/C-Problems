#include<stdio.h>

void Rev(int iNo)
{
	int iCnt=iNo-1;
	while(iCnt>=1)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d",iCnt);
		}
		iCnt--;
	}
}
int main()
{
	int iValue=0;
	printf("Enter the No:");
	scanf("%d",&iValue);
	Rev(iValue);
	return 0;
}
