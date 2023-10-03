#include<stdio.h>
#include<malloc.h>
#include<stdio.h>


int Addition(int iNo,int arr[]);
int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int *ptr = NULL;

	printf("Enter the NO of Array:");
	scanf("%d",&iSize);

//	ptr=(int *)malloc(iSize*sizeof(int));

	if(iSize==0)
	{
		printf("Invalid Input:");
		return 0;
	}
	
	ptr=(int *)malloc(iSize*sizeof(int));

	if(ptr==NULL)
	{
		printf("Unable to allocate Memory:");
		return -1;
	}

	printf("Enter the Element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet=Addition(iSize,ptr);


	printf("Addition is :%d",iRet);

	free(ptr);

	return 0;

}
int Addition(int iNo,int arr[])
{
	int iCnt = 0, iSum = 0;
	if((arr==NULL) || (iNo<=0))
	{
		return 0;
	}

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		iSum=iSum+arr[iCnt];
	}
	return iSum;
}
