#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;
UINT CheckBit (UINT iNo);
int main()
{
	UINT iValue = 0, iRet = 0;

	printf("Enter the NO:");
	scanf("%d",&iValue);

	iRet = CheckBit(iValue);

	printf("The modified no is :- %d",iRet);

	return 0;
}
UINT CheckBit(UINT iNo)
{
	UINT iRes = 0, iMask = 0x00000240;

	iRes = iNo ^ iMask;

	return iRes;
}

/*
0000 0000 0000 0000 0000 0010 0100 0001     577 & iMask 
  0    0    0    0   0     0   0     1  */
