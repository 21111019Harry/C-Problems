#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int Index(int iNo,int iGive,int arr[]);
int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, iForward = 0;
	int *p = NULL;

	printf("Enter the NO:");
	scanf("%d",&iSize);

	printf("Enter the No you Want:-");
	scanf("%d",&iForward);

	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate Memory:");
		return -1;
	}

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the Element %d:-",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet=Index(iSize,iForward,p);
	
	printf("%d",iRet);
    printf("\n");

	free(p);

	return 0;
}
int Index(int iNo,int iGive,int arr[])
{
	int iCnt = 0;
/*	for(iCnt=0;iCnt<iNo;iCnt++)//First occurence
	{
		if(arr[iCnt]==iGive)
		{
			break;
		}
	}*/
	for(iCnt=iNo;iCnt>=0;iCnt--)//last occurence
	{
		if(arr[iCnt]==iGive)
		{
			break;
		}
	}
	return iCnt;
}
