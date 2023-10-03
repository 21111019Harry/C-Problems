#include<stdio.h>



int CountDigits(int iNo)
{
	int iCnt=0;
	if(iNo==0)//he filter 0 chi condi separate handeld krt karn i/p jr 0 aal tr return 1 zal pahije karn 0 pn ek digit ahe
	{
		return 1;
	}
	if(iNo<0)//he updater ahe
	{
		iNo=-iNo;
	}
	while(iNo!=0)//yachi time complexity hi yachya i/p vr sanaychi mhnje i/p jr 751 asel tr O(3N) as dynamic ahe jevdha motha no. tevdi mothi time complexity
	{
		iCnt++;
		iNo=iNo/10;
	}
	return iCnt;
	
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=CountDigits(iValue);




	printf("the digit count is:%d",iRet);
	return 0;
}
