#include<stdio.h>
#include<stdlib.h>

int Displayrange(int arr[],int, int, int);
int main()
{
	int iSize=0,iCnt=0,iRet=0,iValue1=0,iValue2=0;
	int *p=NULL;

	printf("Enter the no:");
	scanf("%d",&iSize);

	printf("Enter the starting point:");
	scanf("%d",&iValue1);

	printf("Enter the ending point:");
	scanf("%d",&iValue2);

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

	iRet=Displayrange(p,iSize,iValue1,iValue2);

	free(p);
	return 0;

}
int Displayrange(int arr[],int iNo,int a, int b)
{
	int iCnt=0;

	if(arr==NULL)
	{
		return -1;
	}
	if(iNo<=0)
	{
		return -2;
	}
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
	if((arr[iCnt]>a) && (arr[iCnt<b]))
		{
			printf("%d",arr[iCnt]);

		}
	}
}

