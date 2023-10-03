#include<stdio.h>

void Prime(int iNo)
{
	int iCnt=iNo-1;
	while(iCnt>1)
	{
		if((iNo%iCnt)==0)
		{
			break;
		}
		iCnt--;
	}
	if(iCnt==1)
	{
		printf("Prime:");
	}
	else
		printf("NOT:");
}
int main()
{
	int iValue=0;
	printf("Enter the No:");
	scanf("%d",&iValue);
	Prime(iValue);
	return 0;
}
