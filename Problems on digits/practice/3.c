#include<stdio.h>


int Add(int iValue,int iValue1)
{
	int iDigit=0,iSum=0;
	while(iValue>0)
	{
		iDigit=iValue%10;
		if(iDigit>iValue1)
		{
			iSum=iSum+iDigit;
		}
		iValue=iValue/10;
	}
	return iSum;
}
int main()
{
	int iNo,iNo1,iRet;
	printf("Enter the No:");
	scanf("%d\n%d",&iNo,&iNo1);
	iRet=Add(iNo,iNo1);
	printf("Addition is %d",iRet);
	return 0;
}
