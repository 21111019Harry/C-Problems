#include<stdio.h>

void Factor(int j)
{
	int iCnt=0;
	for(iCnt=j/2;iCnt>=1;iCnt--)
	{
		if((j%iCnt)==0)
		{
			printf("%d",iCnt);
		}
	}
}


int main()
{
	int i=0;
	printf("Enter the no:");
	scanf("%d",&i);
	Factor(i);
	return 0;
}
