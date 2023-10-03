#include<stdio.h>

int bit(int no);
int main()
{
	int i = 0, j = 0, iRet = 0;
	printf("Enter the No:-");
	scanf("%d",&i);
//	printf("Enter the Pos:-");
//	scanf("%d",&j);

	iRet = bit(i);

	printf("%d",iRet);

	return 0;
}
int bit(int no)
{
	int iRet = 0;
	iRet = no ^ 0x00001000;
	return iRet;
	
/*	if(no>>no & 1)
	{

		printf("ONN%d",no);
	}
	else
	{
		printf("OFF");
	}*/
}

