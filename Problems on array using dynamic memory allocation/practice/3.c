#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int Pattern(int iSize,int arr[]);
int main()
{
	int iSize = 0, iRet = 0, iCnt = 0;
	int *p = NULL;

	printf("Entet tho NO:");
	scanf("%d",&iSize);

	if(iSize==0)
	{
		printf("Invslid input:");
		return 0;
	}

	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("UnableTo Allocate Meomery:");
		return -1;
	}
	
	printf("Enter the Element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet=Pattern(iSize,p);

//	printf("%d",iRet);

	free(p);
	return 0;

}
int Pattern(int iNo,int arr[])
{
	int iCnt = 0, iSum = 0, iSum1 = 0;
	if((arr==NULL) || (iNo<=1))
	{
		return 0;
	}
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{
			iSum++;
		}
		else
			iSum1++;
	}
	printf("%d",iSum);
	printf("%d",iSum1);
//	return iSum-iSum1;
}	

