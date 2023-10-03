#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define True 1
#define False 0

typedef int bool;
int Check(int arr[],int);
int main()
{
	int iSize=0,iCnt=0;
	int *p=NULL;
	bool bRet=False;

	printf("Enter the no:");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate memory:");
		return -1;
	}

//	printf("Enter the Element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		pritf("Enter the element %d:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	bRet=Check(p,iSize);

	if(bRet==True)
	{
		printf("11 is Present:");	
	}
	else
	{
		printf("11 is absent:");
	}

	free(p);

	return 0;
}
bool Check(int arr[],int iLength)
{
	int iCnt=0;
	if((arr==NULL) || (iLength<0) )
	{
		return 0;
	}

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(arr[iCnt]==11)
		{
			return True;
		}
		else
		{
			return False;
		}
	}
}
