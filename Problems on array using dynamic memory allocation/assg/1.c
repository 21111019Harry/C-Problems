#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//



int Summation(int arr[],int);
int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *p=NULL;

	printf("Enter the no. of element:");
	scanf("%d",&iSize);


	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate memory: ");
		return -1;
	}

	printf("Enter the element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet=Summation(p,iSize);

	free(p);

	printf("The addition is %d",iRet);

	return 0;
}
int Summation(int arr[],int iLength)
{
	int iCnt=0,iEven=0,iOdd=0,iAns=0;
	if((arr==NULL) || (iLength<=0))
	{
		return 0;
	}
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(arr[iCnt]%2==0)
		{
		//	iEven++;
			iEven=iEven+arr[iCnt];
		}
		else
		{
		//	iOdd++;
			iOdd=iOdd+arr[iCnt];
		}
	}
	iAns=iEven-iOdd;
	return iAns;
}

