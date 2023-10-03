#include<stdio.h>
#include<malloc.h>

int check(int arr[], int iNo);
int main()
{
	int iSize = 0, iCnt = 0;
	int *p = NULL, iRet = 0;

	printf("Enter the no:-");
	scanf("%d",&iSize);

	p=(int*)malloc(iSize*sizeof(int));

	for(iCnt=1;iCnt<iSize;iCnt++)
	{
		printf("Enter the No:-",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet = check(p,iSize);

	if(iRet==-1)
	{
		printf("NONE");
	}
	else if(iRet==1)
	{
		printf("ICN");
	}
	else
	{
		printf("DEC");
	}
	return 0;
}
int check(int arr[], int iNo)
{
	int iCnt =0, j = 0;

	if(arr[1]>arr[0])
	{
		for(j=1;j<iNo;j++)
		{
			if(arr[j]<arr[j-1])
			{
				return -1;
			}
		}
		return 1;
	}
	else
	{
		for(j=1;j<iNo;j++)
		{
			if(arr[j]>arr[j-1])
			{
				return -1;
			}
		}
		return 0;
	}
}
