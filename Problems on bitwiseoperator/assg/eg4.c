#include<stdio.h>
#include<stdbool.h>

int bit(int no);
int main()
{
	int i = 0, iRet = 0;
	printf("Enter the NO:-");
	scanf("%d",&i);

	iRet = bit(i);

	printf("%d",iRet);

	return 0;
}
int bit(int no)
{
	int iRes = 0, iMask = 0x00000001, iCnt = 0, iSum = 0;

	for(iCnt=1;iCnt<32;iCnt++)
	{
		iRes = iMask & no;
		if(iMask==iRes)
		{
			iSum++;
		}
		iMask = iMask<<1;
	}
	return iSum;
}
