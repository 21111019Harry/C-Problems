#include<stdio.h>
#include<malloc.h>
#include<limits.h>//he header file INT_MIN or INT_MAX sathi ahe 

int max(int *crr, int no, int max);
int maxR(int *crr, int no, int);
int main()
{
	int *arr = NULL;
	int iSize = 0, iRet = 0, i = 0, iRet1 = 0, j = -1;

	printf("Enter the Size:-");
	scanf("%d",&iSize);

	arr = (int *)malloc(iSize*sizeof(int));

	for(i=0;i<iSize;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&arr[i]);
	}
	
	iRet = max(arr,iSize,INT_MIN);

	printf("%d\n",iRet);

	iRet1 = maxR(arr,iSize-1,INT_MIN);

	printf("%d",iRet1);

	free(arr);

	return 0;
}
int max(int *crr, int no, int max)
{
	int i = 0;
	for(i=0;i<no;i++)
	{
		if(max<crr[i])
		{
			max = crr[i];
		}
	}
	return max;
}
int maxR(int *crr, int no, int max)
{
	if(no==-1)
	{
		return max;
	}
	if(max<crr[no])
	{
		max = crr[no];
	}
	no--;
	maxR(crr,no,max);
}
