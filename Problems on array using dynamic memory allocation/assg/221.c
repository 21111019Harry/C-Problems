#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Frequency(int brr[],int);
int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *p=NULL;
	
	printf("Enter the no:");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate memory:");
		return -1;
	}

//	printf("Enter the Element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the element %d:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet=Frequency(p,iSize);
		
	printf("The frequency of even no. is %d",iRet);

	free(p);
	return 0;
}
int Frequency(int brr[],int iNo)
{
	int iCnt=0,iAns=0;
	if((brr==NULL) || (iNo<0))
	{
		return 0;
	}

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if((brr[iCnt]%2)==0)
		{
			iAns++;
		}
	}
	return iAns;
}
