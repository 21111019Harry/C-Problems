#include<stdio.h>
#include<stdlib.h>

int Freq(int H[], int);
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

	printf("Enter the element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet=Freq(p,iSize);
	
	free(p);

	printf("the freqence of 11 is %d time",iRet);

	return 0;
}
int Freq(int H[],int iNo)
{
	int iCnt=0,iSum=0;

	if((H==NULL) || (iNo<0))
	{
		return 0;
	}

	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(H[iCnt]==11)
		{
			iSum++;
		}
	}
	return iSum;
}


