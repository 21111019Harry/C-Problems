#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//accept n no. from user and return addition of even no.
//he callby value and callby address ahe karn aapn function la dhogh patvtoy
int addition(int arr[],int);
int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *p=NULL;

	printf("Enter the no. of element:");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));

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

	iRet=addition(p,iSize);//aapn java madhe fkt single parameter pathvto mhnje fkt p karn kuthpryant jaychy he javala satha klt mhnje size

	printf("The addition is %d",iRet);

	free(p);

	return 0;
}
int addition(int arr[],int iLength)
{
	int iSum=0,iCnt=0;
	if((arr==NULL) || (iLength<=0))
	{
		return 0;
	}
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{
			iSum+=arr[iCnt];
		}
	}
	return iSum;
}
