#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int Largest(int iNo,int arr[]);
int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
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

	iRet=Largest(iSize,p);

	printf("%d",iRet);
    printf("\n");

	free(p);

	return 0;
}
int Largest(int iNo,int arr[])
{
	int iCnt = 0, iSum = 0, iSec = 0, iTemp = 0;
	int max = 0;//because arraych null aala tr arr[0] lihun kahi faydaych nahi mhnun aapn arr[0] aapn khali lihly
	int min = 0;
	if((arr==NULL) || (iNo<=0))
	{
		printf("Invalid Input:");
		return -1;
	}

	max = arr[0];
	min = arr[0];

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt] > max) 
		{
			max = arr[iCnt];
		}

		if(iCnt==(iNo-1))//yahape hmne secondlast largest element print kiya hai and large no and secondlast large no ki subtraction ki hai
		{
			iSec=max-arr[iCnt];
//			printf("%d\t",arr[iCnt]);
//			printf("%d\t",iSec);
		}
		
		if(arr[iCnt] < min)
		{
			min = arr[iCnt];
		}
	}
	iSum=max-min;
	return iSum;
}
