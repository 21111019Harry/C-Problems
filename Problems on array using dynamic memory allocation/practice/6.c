#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int Another(int iNo,int iGive,int arr[]);
int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, iforward = 0;
	int *p = NULL;

	printf("Enter the NO:");
	scanf("%d",&iSize);

	printf("Enter the NO you Want:");
	scanf("%d",&iforward);

	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate Memory: ");
		return -1;
	}

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the Element%d:\t",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet=Another(iSize,iforward,p);

	if(iRet==1)
	{
		printf("Yes");
        printf("\n");
	}
	else
	{
		printf("No");
        printf("\n");
	}

	free(p);

	return 0;
}
int Another(int iNo,int iGive,int arr[])
{
	int iCnt = 0, iSum = 0;

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]==iGive)
		{
			iSum++;
			break;
		}
	}
	return iSum;
}
