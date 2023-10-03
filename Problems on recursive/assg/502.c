#include<stdio.h>


int largestI(int no);
int largestR(int no);
int largestRX(int no, int iCnt);
int main()
{
	int i = 0, iRet = 0, iRet1 = 0, iRet2 = 0, j = 1;

	printf("Enter the NO:-");
	scanf("%d",&i);

	iRet = largestI(i);

	printf("%d\n",iRet);

	iRet1 = largestR(i);

	printf("%d\n",iRet1);

	iRet2 = largestRX(i,j);

	printf("%d",iRet2);

	return 0;
}
int largestI(int no)
{
	int iDigit = 0, iCnt = 0;
	while(no>0)
	{
		iDigit = no%10;
		if(iCnt<iDigit)
		{
			iCnt = iDigit;
		}
		no = no/10;
	}
	return iCnt;
}
int largestR(int no)//recursive using static variable
{
	int static iCnt = 0, iDigit = 0;
	if(no>0)
	{
		iDigit = no%10;
		if(iCnt<iDigit)
		{
			iCnt = iDigit;
		}
		no = no/10;
		largestR(no);
	}
	return iCnt;
}
int largestRX(int no, int iCnt)
{
	if(no==0)
	{
		return iCnt;
	}
	if(no%10>iCnt)
	{
		iCnt = no%10;
	}
	largestRX(no/10,iCnt);
}
