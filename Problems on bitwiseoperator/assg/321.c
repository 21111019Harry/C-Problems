#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT iNo);
int main()
{
	UINT iValue = 0, bRet = 0;

	printf("Enter the No:");
	scanf("%d",&iValue);

	bRet=CheckBit(iValue);

	if(bRet==true)
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
	UINT iRes = 0, iMask = 0x00004000;

	iRes= iNo & iMask;

	if(iRes==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
