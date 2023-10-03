#include<stdio.h>

void bit(int no, int no1);
int main()
{
	int i = 0, j = 0;
	printf("Enter the no:-");
	scanf("%d",&i);
	printf("Enter the Pos:-");
	scanf("%d",&j);

	bit(i,j);

	return 0;
}
void bit(int no, int no1)
{
	int iCnt = 0, iDigit = 0;
	if(no>>no1 & 1)
	{
		printf("True:");
	}
	else
	{
		printf("False:");
	}
}
