#include<stdio.h>
#include<stdbool.h>

int bit(int no);
int main()
{
	int i = 0, iRet = 0;
	printf("Enter the No:-");
	scanf("%d",&i);

	iRet = bit(i);

	printf("%d",iRet);

	return 0;
}
int bit(int no)
{
	int iMask = 0x00000001, iSum = 0;
	int iCnt = 0, iRes = 0;;

	for(iSum=1;iSum<32;iSum++)
	{
		iRes = no & iMask;
		if(iMask==iRes)
		{
			iCnt++;
		}
		iMask = iMask<<1;
	}
	return iCnt;
}
