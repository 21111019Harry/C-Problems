#include<stdio.h>
#include<stdbool.h>

int bit(int no, int pos);
int main()
{
	int i = 0, j = 0, iRet = 0;
	printf("Enter the No:-");
	scanf("%d",&i);

	printf("Enter the pos:-");
	scanf("%d",&j);

	iRet = bit(i,j);

	printf("%d",iRet);

	return 0;
}
int bit(int no, int pos)
{
	int iRes = 0, iMask = 0x00000001;

	iMask = iMask<<(pos-1);

	iRes = no | iMask;

	return iRes;
}
