#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;
void CheckBit(UINT iNo, UINT iNo1);
int main()
{
	UINT iValue1 = 0, iValue2 = 0;

	printf("Enter the First NO:-");
	scanf("%d",&iValue1);

	printf("Enter the Second NO:-");
	scanf("%d",&iValue2);

	CheckBit(iValue1,iValue2);

	return 0;
}
void CheckBit(UINT iNo, UINT iNo1)
{
	UINT iRes = 0, iMask = 0x0000064;
	int iCnt = 0;

	iMask = iNo & iMask;

	if(iRes==iMask)
	{
		iCnt++;
	}
	printf("%d",iCnt);


}

/* 0000 0000 0000 0000 0000 0000 1010 0100 */
