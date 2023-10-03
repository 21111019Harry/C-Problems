#include<stdio.h>


int productR(int no);
int addRX(int no,int iMult);
int main()
{
	int i = 0, iRet = 0, iRet1 = 0, j = 1;
	printf("Enter the NO:-");
	scanf("%d",&i);

	iRet = productR(i);

	printf("%d\n",iRet);

	iRet1 = addRX(i,j);

	printf("%d",iRet1);
	return 0;
}
int productR(int no)//using static
{
	int iDigit = 0;
	static int iMult = 1;
	if(no>0)
	{
		iDigit = no%10;
		iMult = iMult*iDigit;
		no = no/10;
		productR(no);
	}
	return iMult;
}
int addRX(int no,int iMult)//without using static
{
	int iDigit = 0;
	if(no==0)
	{
		return iMult;
	}
	iDigit = no%10;
	iMult = iMult*iDigit;
	no = no/10;
	return addRX(no,iMult);
}
