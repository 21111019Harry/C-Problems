#include<stdio.h>

//accept no. from user and display below pattern as
//i/p 4 o/p 4*3*2*1*2*3*4*  i/p 6 /op 6*5*4*3*2*1*2*3*4*5*6*

void Pattern(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=iNo;iCnt>1;iCnt--)//yechi pn complexcity O(2N) ahe karn ith 2 loop ahe aani te 2 1,1 veles firtayet mhnje total 2 veles jr i/p 4 asel tr 1st loop 4 to 1 aani 2nd loop 2 to4
	{
		printf("%d*",iCnt);
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d*",iCnt);
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
