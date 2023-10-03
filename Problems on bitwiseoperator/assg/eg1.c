#include<stdio.h>
#include<stdbool.h>

int bit(int no);
int main()
{
	int i = 0, iRet = 0;

	printf("Enter the No:-");
	scanf("%d",&i);

	iRet = bit(i);

	if(iRet=true)
	{
		printf("True");
	}
	else
		printf("False:");

	return 0;
}
int bit(int no)
{
	if((no<<4 & no<<1) | 1 )
	{
		return true;
	}
	else
		return false;
}
