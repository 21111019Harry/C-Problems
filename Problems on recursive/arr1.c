#include<stdio.h>
#include<malloc.h>

int max(int *crr, int no, int *prr);
int main()
{
	int *arr = NULL, brr[20];
	int iSize = 0, i = 0, iRet = 0;

	printf("Enter the size:-");
	scanf("%d",&iSize);

	arr = (int *)malloc(iSize*sizeof(int));
//	brr = (int *)malloc(iSize*sizeof(int));

	for(i=0;i<iSize;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&arr[i]);
	}

	for(i=0;i<iSize;i++)
	{
		printf("Enter the Second Array Element:-");
		scanf("%d",&brr[i]);
	}

	iRet = max(arr,iSize,brr);

	printf("%d",iRet);

	free(arr);

	return 0;
}
int max(int *crr, int no, int *prr)
{
	int i = 0, j = 0, imax = 0;
	for(i=0;i<no;i++)
	{
		for(j=0;j<no;j++)
		{
			if(imax<crr[i]+prr[j])
			{
				imax = crr[i]+prr[j];
			}
		}
	}
	return imax;
}
