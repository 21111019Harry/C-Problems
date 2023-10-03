#include<stdio.h>
#include<stdbool.h>

//accept no from user and check weather 9,10,11,25 bit is on or off.

typedef unsigned int UINT;
bool CheckBit(UINT iNo);
int main()
{
	UINT iValue = 0, iRet = 0;

	printf("Enter the NO:");
	scanf("%d",&iValue);

	iRet=CheckBit(iValue);

	if(iRet==true)
	{
		printf("Bit is ON:");
	}
	else
	{
		printf("Bit is OFF:");
	}
	return 0;
}
bool CheckBit(UINT iNo)
{
	UINT iRes = 0, iMask = 0x01000700;

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

/* 0000 0000 0000 0000 0000 0000 0000 0000
    0    1     0   0     0   7    0     0
    */
