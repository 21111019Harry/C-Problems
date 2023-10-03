#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Frequency(int ptr[],int);
int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *p=NULL;

	printf("Enter the no:");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate mmory:");
		return -1;
	}

//	printf("Enter the Element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the element %d:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet=Frequency(p,iSize);

	free(p);

	printf("the frequency of even no. and odd no. is %d",iRet);

	return 0;
}
int Frequency(int ptr[],int iNo)
{
	int iCnt=0,iEven=0,iOdd=0;
	if((ptr==NULL) || (iNo<0))
	{
		return 0;
	}
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if((ptr[iCnt]%2)==0)
		{
			iEven++;
		}
		else
			iOdd++;
	}
	return iEven-iOdd;
}
