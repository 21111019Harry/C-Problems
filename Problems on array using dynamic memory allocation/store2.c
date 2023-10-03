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
		printf("Enter the Element:-");
		scanf("%d",&arr[i]);
	}

	swap(arr,iSize,brr);

	free(arr);

	return 0;
}
void swap(int *crr, int no, int *prr)
{
	int i = 0, iMult = 1;
	for(i=0;i<no;i++)
	{
		iMult = iMult*crr[i];
	}
	for(i=0;i<no;i++)
	{
		prr[i] = iMult/crr[i];
	}
	for(i=0;i<no;i++)
	{
		printf("|%d|",prr[i]);
	}
    printf("\n");
}
