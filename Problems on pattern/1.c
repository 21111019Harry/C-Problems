#include<stdio.h>

//accept no. from user and display below pattern
//i/p 5 o/p 1 2 3 4 5 i/p -4 o/p 1 2 3 4 
void Pattern1(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo ;iCnt++)//yachi complexcity O(N) ahe
	{
		printf("%d\t",iCnt);
	}
}
int main()
{
	int iValue=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	Pattern1(iValue);
	return 0;
}
