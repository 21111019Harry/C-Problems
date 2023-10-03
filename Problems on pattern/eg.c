#include<stdio.h>

void Factor(int i)
{
	int iCnt=1; 
	for(iCnt=1;iCnt>i;iCnt++)
	{
		if((iCnt%i)==0)
		{
			printf("%d",i);
		}
	}
}


int main()
{
	int p=0,j=0;
	printf("Enter the iRow:");
	scanf("%d",&p);
//	printf("Enter the iCol:");
//	scanf("%d",&j);
	Factor(p);
	return 0;
}
