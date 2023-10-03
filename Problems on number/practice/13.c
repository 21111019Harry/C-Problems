#include<stdio.h>


void Mult(int iNo,int iNo1)
{
	int iCnt=1,iMult=1;
	while(iCnt<=iNo1)
	{
		iMult=iMult*iNo;
		iCnt++;
	}
	printf("%d",iMult);
}
int main()
{
	int iValue=0,iValue1=0;
	printf("Enterthe No:");
	scanf("%d%d",&iValue,&iValue1);
	Mult(iValue,iValue1);
	return 0;
}
