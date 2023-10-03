#include<stdio.h>

int fact(int no, int iMult);
int main()
{
	int i = 0,j = 1, iRet = 0;
	printf("Enter the No:");
	scanf("%d",&i);
	iRet = fact(i,j);
	printf("%d",&iRet);
	return 0;
}
int fact(int no, int iMult)
{
	static int a = 0;
	if(a>0)
	{
		iMult = iMult*no;
		a++;
	}
	return fact(no,iMult);
}
