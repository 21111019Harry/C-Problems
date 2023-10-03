#include<stdio.h>
#include<stdio.h>
#include<malloc.h>

int Product(int arr[],int iNo)
{
	int iCnt=0,iMult=1;

	if((arr==NULL) || (iNo<=0))
	{
		return 0;
	}

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if((arr[iCnt]%2)!=0)
		{
			iMult=iMult*arr[iCnt];
		}
	}
	return iMult;
}
int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *p=NULL;

	printf("Enter the no: ");
	scanf("%d",&iSize);

	p=(int*)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate memory: ");
		return -1;
	}

	printf("Enter the Element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet=Product(p,iSize);

	printf("The product of Odd no is %d",iRet);

	free(p);

	return 0;
}
