#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Product(int iNo,int arr[]);
int main()
{
	int iCnt = 0, iSize = 0, iRet = 0;
	int *p = NULL;

	printf("Enter the NO:");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate Memory:");
		return -1;
	}

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the Element%d:-",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet=Product(iSize,p);
	
	printf("%d",iRet);
    printf("\n");

	free(p);

	return 0;
}
int Product(int iNo,int arr[])
{
	int iCnt = 0, iMult = 1;

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if((arr[iCnt]%2)!=0)
		{
			iMult=iMult*arr[iCnt];
		}
	}
	return iMult;
}

