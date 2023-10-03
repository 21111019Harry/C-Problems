#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0,iCnt=0,a[i];
	printf("Enter the no:");
	scanf("%d",&i);
	printf("Enter the Array:");
	for(iCnt=0;iCnt<i;iCnt++)
	{
		scanf("%d",&a[iCnt]);
	}
	printf("Arry Reverse:\n");
	for(iCnt=i-1;iCnt>=0;iCnt--)
	{
		printf("%d",a[iCnt]);
	}
    printf("\n");
}
