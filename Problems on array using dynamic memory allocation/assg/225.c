#include<stdio.h>
#include<stdlib.h>


int Retfreq(int d[], int, int);
int main()
{
	int iSize=0,iCnt=0,iRet=0,iValue=0;
	int *p=NULL;

	printf("Enter the no:");
	scanf("%d",&iSize);

	printf("Enter the no. you want:");
	scanf("%d",&iValue);


	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocat memory:");
		return -1;
	}

	printf("Enter the Element:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet=Retfreq(p,iSize,iValue);

	if(iRet==-1)
	{
		printf("Error:Memory Failure");
		return 0;
	}
	printf("the frequence of %d is % d",iValue,iRet);
    printf("\n");

	free(p);

	return 0;
}
int Retfreq(int d[],int iNo,int a)
{
	int iCnt=0,iSum=0;

	if((d==NULL) || (iNo<=0))
	{
		return -1;//yala error code mhntat mhnje error ch karn kay tr -1,-2,-3 as lihaych ast ith -1 mhnje ith aapn frequence count krtoy mg ti ektr 0 asel or positive asel pn negative nsel mhnje no. ekda repeat zala asel or ekpn veles aalach nsel 
	}

	for(iCnt=0;iCnt<iNo;iCnt++)//yachi time complexsity o(N) ahe
	{
		if(d[iCnt]==a)
		{
			iSum++;
		}
	}
	return iSum;
}
