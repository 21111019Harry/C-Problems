#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;
UINT CheckBit(UINT iNo,int iPos);
int main()
{
	UINT iValue = 0, iRet = 0;
	int iValue1 = 0;

	printf("Enter the NO:-");
	scanf("%d",&iValue);

	printf("Enter the Position you want:-");
	scanf("%d",&iValue1);

	iRet = CheckBit(iValue,iValue1);

	printf("%d",iRet);

	return 0;
}
UINT CheckBit(UINT iNo, int iPos)
{
	UINT iRes = 0, iMask = 0x00000001;

	iMask = iMask<<(iPos-1);

	iRes = iNo ^ iMask;

	return iRes;


}
