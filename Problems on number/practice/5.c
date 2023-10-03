#include<stdio.h>

void Even(int iValue)
{
	int iCnt=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	for(iCnt=1;iCnt<iValue;iCnt++)
	{
		if((iValue%iCnt)==0)
		{
			if((iCnt%2)!=0)
			{
				printf("%d\n",iCnt);
			}
		}
	}
}
int main()
{
	int iNo;
	printf("Enter the No:");
	scanf("%d",&iNo);
	Even(iNo);
	return 0;
}
