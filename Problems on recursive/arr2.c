#include<stdio.h>
#include<malloc.h>

void  swap(int *crr, int no, int put);
int main()
{
	int *arr = NULL;
	int value = 20, iSize = 0, i = 0;

	printf("Enter the Size:-");
	scanf("%d",&iSize);

	arr = (int *)malloc(iSize*sizeof(int));

	for(i=0;i<iSize;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&arr[i]);
	}

	swap(arr,iSize,value);

	free(arr);

	return 0;
}
void swap(int *crr, int no, int put)
{
	int i = 0;
	for(i=no+1;i>0;i--)
	{
		crr[i] = crr[i-1];
	}
	crr[i] = put;
	for(i=0;i<=no;i++)
	{
		printf("%d\n",crr[i]);
	}
}
