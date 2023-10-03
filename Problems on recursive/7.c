#include<stdio.h>

// accept 2 no. as x,y and return its power as x^y.
// i/p 3,4 o/p 81.

int powerI(int no, int no1);
int powerR(int iValue, int iValue1, int no);
int powerRstatic(int no, int no1);
int main()
{
	int i = 0, j = 0, iRet = 0, iRet1 = 0, no = 1, iRet2 = 0;

	printf("Enter the NO:-");
	scanf("%d",&i);

	printf("Enter the NO:-");
	scanf("%d",&j);

	iRet = powerI(i,j);

	printf("%d\n",iRet);

	iRet1 = powerR(i,j,no);

	printf("%d\n",iRet1);

	iRet2 = powerRstatic(i,j);

	printf("%d",iRet2);

	return 0;
}
int powerI(int no, int no1)//
{
	int i = 0, iMult = 1;
	for(i=1;i<=no1;i++)
	{
		iMult = iMult*no;
	}
	return iMult;
}
int powerR(int iValue, int iValue1, int i)//recursive function using without static variable
{
	if(i==iValue1)
	{
		return	iValue;

	}
	return iValue*powerR(iValue,iValue1,++i);
}
int powerRstatic(int x, int y)//recursive function using static variable
{
	static int iMult = 1, i = 0;
	if(y>0)//(i<y)
	{
		iMult = iMult*x; 
		y--;//i--;
		powerRstatic(x,y);
	}
	return iMult;
}
