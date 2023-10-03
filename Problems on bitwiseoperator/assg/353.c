#include<stdio.h>
#include<stdbool.h>



typedef unsigned int UINT;
bool CheckBit(UINT iNo);
int main()
{
	UINT iValue = 0;
	int iRet = 0;

	printf("Enter the NO:-");
	scanf("%d",&iValue);

	iRet = CheckBit(iValue);

	if(iRet==true)
	{
		printf("ON:");
	}
	else
	{
		printf("OFF:");
	}

	return 0;
}
bool CheckBit(UINT iNo)
{
	UINT iRes = 0, iMask = 0x00000800;

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

/* 0000 0000 0000 0000 0000 4001 0000 0000
 
 */
