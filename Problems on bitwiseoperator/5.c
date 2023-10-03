#include<stdio.h>
#include<stdbool.h>


//accept no from user and check weather 13 bit of that is on or off.

typedef unsigned int UINT;
bool CheckBit(UINT iNo);
int main()
{
	UINT iValue = 0, iRet = 0;

	printf("Enter the No:");
	scanf("%d",&iValue);

	iRet=CheckBit(iValue);

	if(iRet==true)
	{
		printf("Bit is ON:");
	}
	else
	{
		printf("Bit is OFF");
	}
	return 0;
}
bool CheckBit(UINT iNo)
{
	UINT iRes = 0, iMask = 0x00001000;
	
	iRes = iNo & iMask;

	if(iRes==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
