#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int Range(int iSize,int iS,int iE,int arr[]);
int main()
{
	int iSize = 0, iCnt = 0;
	int *p = NULL;
	int iStart = 0, iEnd = 0;

	printf("Enter the NO:");
	scanf("%d",&iSize);

	printf("Enter the Start point:");
	scanf("%d",&iStart);

	printf("Enter the Ending point:");
	scanf("%d",&iEnd);

	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate Memory:");
		return -1;
	}

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the Element%d :-",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	Range(iSize,iStart,iEnd,p);

//	printf("%d",iRet);

	free(p);

	return 0;
}
int Range(int iNo,int iS,int iE,int arr[])
{
	int iCnt = 0;

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if((arr[iCnt]>iS) && (arr[iCnt]<iE))
		{
			printf("%d\t",arr[iCnt]);
		}
		else
		{
			printf("Nothing:");
			break;
		}
	}
}
