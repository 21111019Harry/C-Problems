#include<stdio.h>

//accept no. from user and display below pattern
//i/p 8 o/p 1*3*5*7* i/p 5 o/p 1*3*5
//ith i/p madhil odd no. la jschya ts print kraych ahe aani i/p madhil even no. la * print krayc ahe
void Pattern1(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)//yachi complexcity O(N)ahe karn ha loop purn firtoy
	{
		if((iCnt%2)==0)
		{
			printf("*\t");
		}
		else
		{
			printf("%d",iCnt);
		}
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
