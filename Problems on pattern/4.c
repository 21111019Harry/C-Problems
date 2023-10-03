#include<stdio.h>

//accept no. from user and display below pattern
//i/p 6 o/p 1*2#3*4#5*6# i/p 3 o/p 1*2#3*
void Pattern(int iNo)//yachi time complexcity O(N) ahe karn ha purn fitoy mhnun
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d",iCnt);//he printf lihily karn he if else madhe comman ahe mhnun karn if madhe aapn aadhi no. print krtoy aani nantr symbol else madhe pn tech ahe he lihilyavr fkt if else madhe symbol print krayche 
		if((iCnt%2)==0)
		{
		//	printf("%d#",iCnt);
			printf("#");
		}
		else
		{
		//	printf("%d*",iCnt);
			printf("*");
		}
	}
}
int main()
{
	int iValue=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}
