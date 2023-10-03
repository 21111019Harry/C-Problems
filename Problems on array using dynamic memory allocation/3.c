#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


//accept n no. from user and return difference between summation of even no. and odd no. 

int Difference(int arr[],int);
int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *p=NULL;

	printf("Enter the no. Element:");
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

	iRet=Difference(p,iSize);

	printf("The Difference is %d",iRet);

	free(p);
	return 0;
}
int Difference(int arr[],int iLength)
{
	int iCnt=0,iEven=0,iOdd=0;
	if((arr==NULL) || (iLength<0))
	{
		return 0;
	}
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{
			iEven++;
		}
		else
		{
			iOdd++;
		}

	}
	printf("%d\t",iEven);
	printf("%d\t",iOdd);
//	return iEven-iOdd;
}
