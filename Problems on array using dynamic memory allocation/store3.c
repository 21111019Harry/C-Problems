#include<stdio.h>
#include<malloc.h>

void swap(int *crr, int iSize, int *prr);
int main()
{
	int i = 0, iSize = 0;
	int *arr = NULL;
	int brr[20];

	printf("Enter the Size:-");
	scanf("%d",&iSize);

	arr = (int *)malloc(iSize*sizeof(int));

	for(i=0;i<iSize;i++)
	{
		printf("Enter the Element:");
		scanf("%d",&arr[i]);
	}

	swap(arr,iSize,brr);

	free(arr);

	return 0;
}
void swap(int *crr, int no, int *prr)
{
	int  i = 0, iMult = 1, j =0;
	for(i=0;i<no;i++)
	{
		iMult = 1;
		for(j=0;j<no;j++)
		{
			if(i!=j)
			{
				iMult = iMult*crr[j];
			}
		}
		prr[i] = iMult;
	}
	for(i=0;i<no;i++)
	{
		printf("|%d|",prr[i]);
	}
}
