#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int bool;

bool Retfreq(int arr[],int,int);
int main()
{
	int iSize=0,iCnt=0,iValue=0;
	int *p=NULL;
	bool bRet=False;

	printf("Enter the no:");
	scanf("%d",&iSize);

	printf("Enter the no. you want:");
	scanf("%d",&iValue);

	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate memory:");
		return -1;
	}

//	printf("Enter the Element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the element %d:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	bRet=Retfreq(p,iSize,iValue);
	
	if(bRet==True)
	{
		printf("True:");
	}
	else
	{
		printf("False:");
	}

	free(p);
	return 0;
}
bool Retfreq(int arr[],int iNo,int a)
{
	int iCnt=0;

	if((arr==NULL) || (iNo<0))
	{
		return 0;
	}

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]==a)
		{
			return True;
		}
	}
}
