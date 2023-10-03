#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


int Divisible(int arr[],int);

int main()
{
	int iSize=0,iCnt=0;
	int *p=NULL;

	printf("Enter the element:");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));


	printf("Enter the no:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	Divisible(p,iSize);

	free(p);



	return 0;
}
int Divisible(int arr[],int iLength)
{
	int iCnt=0;
	if((arr==NULL) || (iLength<=0))
	{
		return 0;
	}
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt]%5)==0)
		{
			printf("The no is %d\t",arr[iCnt]);
		}
	}
}
