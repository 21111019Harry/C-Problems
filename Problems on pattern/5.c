#include<stdio.h>

//accept no. from user and display below pattern
//i/p 4 o/p 1234321 i/p 6 o/p 12345654321
void Pattern(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)//yachi complexcity O(2N) ahe karn ith 2 loop ahet ani 1st loop ekda aani 2nd loop ekda as 2 vels loop firtay i/p jr 4 asel tr 1st 1 to 4 2nd 3 to 1
	{
		printf("%d",iCnt);
	}
	for(iCnt=iNo-1;iCnt>=1;iCnt--)//ith >=1 yeil karn ith aaplyala 1 pekshka vrche pahijet iNo-1 pryant mhnje i/p 6 asel tr 6-1=5 tr 1 to 4 pahijet mhnje 4>=1,3>=1,2>=1,1>=1 as
	{
		printf("%d",iCnt);
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
