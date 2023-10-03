#include<stdio.h>

int revI(int no);
int revRX(int no, int iRev);
int main()
{
	int i = 0, j = 0, iRet = 0, iRet1 = 0, iRet2 = 0;

	printf("Enter the NO:-");
	scanf("%d",&i);

	iRet = revI(i);

	printf("%d\n",iRet);

	iRet2 = revRX(i,j);

	printf("%d",iRet2);

	return 0;
}
int revI(int no)
{
	int iDigit = 0, iRev = 0;
	while(no>0)
	{
		iDigit = no%10;
		iRev = iRev*10+iDigit;
		no = no/10;
	}
	return iRev;
}
int revRX(int no, int iRev)
{
	if(no==0)
	{
		return iRev;
	}
	iRev = iRev*10+no%10;
	no = no/10;
	revRX(no,iRev);
}
