#include<stdio.h>
#include<stdlib.h>

int Lastocc(int brr[],int, int);
int main()
{
	int iSize=0,iCnt=0,iRet=0,iValue=0;
	int *p=NULL;

	printf("Enter the no:");
	scanf("%d",&iSize);

	printf("Enter no. you want:");
	scanf("%d",&iValue);

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

	iRet=Lastocc(p,iSize,iValue);

	if(iRet==-1)
	{
		printf("Error:Memory Failure ");
	}
	if(iRet==-2)
	{
		printf("Error:Size Failure");
	}
	else if(iRet==-3)
	{
		printf("Error:there is no such element:");
	}
	else
	{
		printf("Success:Element occures %d",iRet);
	}

	free(p);
	return 0;
}
int Lastocc(int brr[],int iNo,int a)
{
	int iCnt=0;

	if(brr==NULL)
	{
		return -1;
	}
	if(iNo<=0)
	{
		return -2;
	}
	for(iCnt=iNo-1;iCnt>=0;iCnt--)
	{
		if(brr[iCnt]==a)
		{
			break;
		}
	}
	if(iCnt==-1)
	{
		return -3;
	}
	else
	{
		return iCnt;
	}

}
