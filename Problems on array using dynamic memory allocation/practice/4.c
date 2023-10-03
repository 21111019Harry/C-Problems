#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


int Pattern(int iSize,int arr[]);
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

	printf("Enter the Element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet=Pattern(iSize,p);

/*	printf("Array is:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("%d\t",p[iCnt]);
	}*/

	free(p);

	return 0;
}
int Pattern(int iNo,int arr[])
{
	int iCnt = 0,i;
	if((arr==NULL) || (iNo<0))
	{
		return 0;
	}

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{
			arr[iCnt]=arr[iCnt]+4;
		}
		else
		{
			arr[iCnt]=arr[iCnt]-3;
		}
	}
	printf("Array is:-");
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("%d\t",arr[iCnt]);
	}
    printf("\n")
}
