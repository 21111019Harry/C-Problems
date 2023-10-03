#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT CheckBit(UINT iNo);
int main()
{
	UINT iValue = 0, iRet = 0;

	printf("Enter the NO:");
	scanf("%d",&iValue);

	iRet = CheckBit(iValue);

	printf("Modified no is:- %d",iRet);

	return 0;
}
UINT CheckBit(UINT iNo)
{
	UINT iRes = 0, iMask = 0x0000040; 

	iRes = iNo ^ iMask;// iRes = iNo | iMask;

	return iRes;
}


/*  0000 0000 0000 0000 0000 0000 1000 1001   137   let 7 bit toggle
    0000 0000 0000 0000 0000 0000 1100 1001   201
      0   0    0     0    0   0    0     0
 */
