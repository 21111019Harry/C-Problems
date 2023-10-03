#include<stdio.h>
#include<stdbool.h>

int bit(int no);
int main()
{
	int i = 0, iRet, j, k;
	printf("Enter the No;-");
	scanf("%d",&i);

	iRet = bit(i);

	if(iRet==1)
	{
		printf("True:-");
	}
	else
	{
		printf("False:-");
	}

	return 0;
}
int bit(int no)
{
	int iRet = 0, iMask = 0x00000001, iRes = 0, iMask1 = 0x00000001, iF = 0;
}
