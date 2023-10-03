#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


int Frequency(int iSize,int arr[]);
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
		printf("Enter the Element %d:-",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet=Frequency(iSize,p);

	printf("%d",iRet);

	free(p);

	return 0;
}
int Frequency(int iNo,int arr[])
{
	int iCnt = 0, iEven = 0, iOdd = 0, iRet = 0;
	for(iCnt=0;iCnt<iNo;iCnt++)
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
	iRet=iEven-iOdd;
	return iRet;

}
