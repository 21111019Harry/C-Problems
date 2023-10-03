#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;
int CheckBit(UINT iNo);
int main()
{
	UINT iValue = 0;
	int iRet = 0;

	printf("Enter the NO:-");
	scanf("%d",&iValue);

	iRet = CheckBit(iValue);

	printf("%d Bit is ON:",iRet);

	return 0;
}
int CheckBit(UINT iNo)
{
	UINT iRes = 0, iMask = 1;
	int iCnt = 0, iSum = 0;

	for(iSum=1;iSum<32;iSum++)
	{
		iRes = iNo & iMask;
		if(iRes==iMask)
		{
			iCnt++;
		}
		iMask=iMask<<1;
	}     
	return iCnt;
}

/* 0001 1101  no.27 3 bit on


*/
