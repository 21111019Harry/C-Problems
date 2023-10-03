#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Mult(int arr[],int);
int main()
{
	int iSize=0,iCnt=0;
	int *p=NULL;
	printf("Enter the no:");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));


	if(p==NULL)
	{
		printf("Unable to allocate memory:");
		return -1;
	}

	printf("Enter the Element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	Mult(p,iSize);

	free(p);
	return 0;

}
int Mult(int arr[],int iLength)
{
	int iCnt=0;
	if((arr==NULL) || (iLength<0))
	{
		return 0;
	}

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt]%11)==0)
		{
			printf("%d\t",arr[iCnt]);
		}
	}
}
