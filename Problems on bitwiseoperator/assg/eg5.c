#include<stdio.h>
#include<stdbool.h>

int bit(int no);
int main()
{
	int i = 0,iRet = 0,j,k;
	printf("Enter the NO:-");
	scanf("%d%d%d",&i,&j,&k);

	iRet = bit(i,j,k);

	if(iRet==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
int bit(int no, int pos1, int pos2)
{

}
