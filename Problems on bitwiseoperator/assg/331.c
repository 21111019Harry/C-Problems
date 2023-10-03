//0000 0000 0000 0000 0000 0000 0100 1111
// 0    0    0    0     0   0     1   
//  0   0     0    0   0    0     4   f
// o/p 0 0 0 0 0 0 0 f
#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;
UINT CheckBit(UINT iNo);
int main()
{
	UINT iValue = 0, iRet = 0;

	printf("Enter the NO:");
	scanf("%d",&iValue);

	iRet=CheckBit(iValue);

	printf("%d",iRet);

	return 0;
}
UINT CheckBit(UINT iNo)
{
	UINT iRes = 0, iMask = 0x00000040;


	iRes = iNo ^ iMask;

	return iRes;
}

/*  0000 0000 0000 0000 0000 0000 0400 0000
      0   0
 */
