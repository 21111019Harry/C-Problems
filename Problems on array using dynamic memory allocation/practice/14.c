#include<stdio.h>
#include<stdlib.h>


//3 element array 12,26,24 o/p ***
//				********
//				******
//int Pattern(int iNo,int arr[]);
/*
{
	int iCnt = 0, iSum = 0, iDigit = 0, iCnt1 = 0;
	if((arr=NULL) || (iNo<=0))
	{
		return 0;
	}

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		while(arr[iCnt]!=0)
		{
			iDigit=arr[iCnt]%10;
			iSum=iSum+iDigit;
			arr[iCnt]=arr[iCnt]/10;
		}
		printf("%d\t",iSum);
		for(iCnt1=0;iCnt1<iSum;iCnt1++)
		{
			printf("*\t");
		}
		printf("\n");
		iSum=0;
	}

}*/
void Pattern(int iNo, int arr[]);
int main()
{
	int iSize = 0,iCnt = 0;
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

//	printf("%d",iSize);
	Pattern(iSize,p);

	free(p);

	return 0;
}
void Pattern(int iNo,int *arr)
{
	int iCnt = 0, iDigit = 0, iSum = 0;

	if((arr=NULL) || (iNo<=0))
	{
		return ;
	}

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		while(arr[iCnt]!=0)
		{
			iDigit=arr[iCnt]%10;
			iSum=iSum+iDigit;
			arr[iCnt]=arr[iCnt]/10;
		}
		printf("%d",iSum);
		iSum = 0;
	}
}
