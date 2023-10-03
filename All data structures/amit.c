#include<stdio.h>
#include<malloc.h>

int Check(int iNo, int arr[]);
int main()
{
	int iValue = 0, iCnt = 0;
	int *p = NULL, iRet = 0;

	printf("Enter the no:");
	scanf("%d",&iValue);
	
	p=(int*)malloc(iValue*sizeof(int));

	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		printf("Enter the no%d:-",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet = Check(iValue,p);

	printf("The ans is %d",iRet);

	free(p);
	return 0;
}
int Check(int iNo, int arr[])
{
	int iCnt = 0, iMul = 1, iAns = 0, i = 0, j = 0;
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		iMul = iMul*arr[iCnt];
	}
//	return iMul;
	for(i=0;i<iNo;i++)
	{
		iAns=iMul/arr[i];

		for(j=0;j<iNo;j++)
		{
			if(arr[j]==iAns)
			{
				return j;
			}
		}
	}
	return -1;
}
