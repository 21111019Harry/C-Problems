#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT CheckBit(UINT iNo, int iPos1, int iPos2);
int main()
{
	UINT iValue = 0, iRet = 0;
	int iValue1 = 0, iValue2 = 0;

	printf("Enter the NO:-");
	scanf("%d",&iValue);

	printf("Enter the First Position:-");
	scanf("%d",&iValue1);

	printf("Enter the Last Position:-");
	scanf("%d",&iValue2);

	iRet = CheckBit(iValue,iValue1,iValue2);

	printf("%d",iRet);

	return 0;

}
UINT CheckBit(UINT iNo, int iPos1, int iPos2)
{
	UINT iRes = 0, iMask1 =0xffffffff, iMask2 = 0xffffffff;
	UINT iMask = 0;

	iMask1 = iMask1<<(iPos1-1); 
	iMask2 = iMask2>>(32-iPos2);

	iMask = iMask1 & iMask2; 

	iRes = iNo ^ iMask;

	return iRes;	

	//return (iNo^((0xffffffff<<(iPos-1))&(0xffffffff>>(32-iPos))));
}
/* 0000 0000 0000 0000 0000 0011 0001 1000  i/p 24 o/p first 1 second 7 o/p 103.
    
     
 */
