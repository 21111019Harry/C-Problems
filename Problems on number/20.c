#include<stdio.h>

void Display(int iNo)//yachi time complexity O(2N) ahe karn ith 2 loop ahet aani te N times firtayet mhnun
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\n");
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("#\n");
	}

}

int main()
{
	int iValue=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
