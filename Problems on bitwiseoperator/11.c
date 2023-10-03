#include<stdio.h>
#include<stdbool.h>


// accept no. from user and count no. of 1's in that no. with list time complexsity.(use only bitwise operator).
//if 7th bit is our last bit which is 1 then our loop should iterrate 7 times only.
typedef unsigned int UINT;
int CheckBit(UINT iNo);
int main()
{
	UINT iValue = 0;
	int iRet = 0;

	printf("Enter the NO:-");
	scanf("%d",&iValue);
	
	iRet = CheckBit(iValue);

	printf("%d",iRet);

	return 0;
}
int CheckBit(UINT iNo)
{
	UINT iRes = 0, iMask = 1;
	int iCnt  = 0;

	while(iNo!=0)
	{
		iRes = iNo & iMask;
		if(iRes!=0)
		{
			iCnt++;
		}
		iNo = iNo>>1;
	}
	return iCnt;
}
/* 0000 0000


*/
