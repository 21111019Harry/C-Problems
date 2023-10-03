#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int iPos);
int main()
{
	UINT iValue = 0, iRet = 0;
	int iPos = 0;

	printf("Enter the No:-");
	scanf("%d",&iValue);

	printf("Enter the Bit you Want:-");
	scanf("%d",&iPos);

	iRet = CheckBit(iValue,iPos);

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
bool CheckBit(UINT iNo,int iPos)
{
	UINT iRes= 0, iMask = 0x00000001;

	iMask =iMask<<(iPos-1);

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
/* 0000 1010  
    0    0
 */
