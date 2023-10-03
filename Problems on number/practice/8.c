#include<stdio.h>
typedef int ULONG;
int Power(int iValue1,int iValue2)
{
	int iCnt,iMult;
	if(iValue1<0)
	{
		iValue1=-iValue1;
	}
	if(iValue2<0)
	{
		iValue2=-iValue2;
	}
	for(iCnt=1;iCnt<=iValue2;iCnt++)
	{
		iMult=iMult*iValue1;
	}
	return iMult;
}
int main()
{
	int iNo1,iNo2,iRet;
	printf("Enter the No:");
	scanf("%d\n%d",&iNo1,&iNo2);
	iRet=Power(iNo1,iNo2);
	printf("Power of %d^%d is %d",iNo1,iNo2,iRet);
	return 0;
}
