#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT iNo);
int main()
{
	UINT iValue = 0;
	bool bRet = 0;

	printf("Enter the No:");
	scanf("%d",&iValue);

	bRet=CheckBit(iValue);

	if(bRet==true)
	{
		printf("Bit is on:");
	}
	else
	{
		printf("Bit is off:");
	}
	return 0;
}
bool CheckBit(UINT iNo)
{
	int iRes = 0;
	UINT iMask = 0x00000008;

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

/* 0000 0000 0000 0000 0000 0010 0000 1000 ye 520 ka binary hai and hum iska first nibal ka bit chalu hai ki nahi yecheck kr rahe hai isliye hamne iMask main last 8 diya hai 8 means 4th position ko 8 value hoti hai and vaha 520 ka bit on hai.
 */
