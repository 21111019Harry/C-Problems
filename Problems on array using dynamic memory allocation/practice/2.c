#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int Pattern(int iNo,int arr[]);
int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int *p = NULL;

	printf("Enter the NO:");
	scanf("%d",&iSize);

	if(iSize==0)
	{
		printf("Invalid Input:");
		return 0;
	}

	p=(int*)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to Allocat Memory:");
		return -1;
	}

	printf("Enter the Element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet=Pattern(iSize,p);

	printf("The Addition is %d",iRet);

	free(p);

	return 0;
}
int Pattern(int iNo,int arr[])
{
	int iCnt = 0, iSum = 0;
	if((arr==NULL) || (iNo<=0))
	{
		return 0;
	}
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{
			iSum=iSum+arr[iCnt];
		}
	}
	return iSum;
}
