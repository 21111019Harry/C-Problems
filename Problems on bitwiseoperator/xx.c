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
	int iRes = (no<<7  1);
		return iRes;
}

