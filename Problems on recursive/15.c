#include<stdio.h>
#include<malloc.h>

//accept n no. from user as well as accept one no. from user and the that no. frequency in that array.

int freq(int *brr, int no, int find);
int freqRev(int *brr, int no, int find);
int freqReverse(int *brr, int no, int find, int iCnt, int i);

int main()
{
	int *arr = NULL;
	int no = 0, i = 0;
	int iSize = 0, iRet = 0, iRet1 = 0, iRet2 = 0;
	
	printf("Enter the size:-");
	scanf("%d",&iSize);

	printf("Enter the no we Srearch:-");
	scanf("%d",&no);

	arr = (int *)malloc(iSize*sizeof(int));

	for(i=0;i<iSize;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&arr[i]);
	}

	iRet = freq(arr,iSize,no);

	printf("%d\n",iRet);

	iRet1 = freqRev(arr,iSize,no);

	printf("%d\n",iRet1);

	iRet2 = freqReverse(arr,iSize,no,0,0);

	printf("%d",iRet2);

	free(arr);

	return 0;
}
int freq(int *brr, int no, int find)
{
	int iCnt = 0, i = 0;
	for(i=0;i<no;i++)
	{
		if(brr[i]==find)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int freqRev(int *brr, int no, int find)
{
	static int i = 0, iCnt = 0;
	if(i<no)
	{
		if(brr[i]==find)
		{
			iCnt++;
		}
		i++;
		freqRev(brr,no,find);
	}
	return iCnt;
}
int freqReverse(int *brr, int no, int find, int iCnt, int i)
{
	if(i==no)
	{
		return iCnt;
	}
	if(brr[i]==find)
	{
		iCnt++;
	}
	i++;
	freqReverse(brr,no,find,iCnt,i);
}
