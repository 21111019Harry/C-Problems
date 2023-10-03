#include<stdio.h>
#include<malloc.h>

int partation(int brr[], int low, int high);
void quicksort(int brr[], int low, int high);
int main()
{
	int *arr = NULL;
	int i = 0, iSize = 0;

	printf("Enter the Size:-");
	scanf("%d",&iSize);

	arr = (int *)malloc(iSize*sizeof(int));

	for(i=0;i<iSize;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&arr[i]);
	}

	quicksort(arr,0,iSize-1);

	for(i=0;i<iSize;i++)
	{
		printf("%d\n",arr[i]);
	}

	free(arr);

	return 0;
}
int partation(int brr[], int low, int high)
{
	int pivote = brr[high];
	int i = low-1, j = high;

	for (j = low; j <= high - 1; j++) 
	{
		if (arr[j] <= pivot) {
		
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);  
	return (i + 1);
}
void quicksort(int brr[], int low, int high)
{
	int j = 0;
	if(low<high)
	{
		j = partation(brr,low,high);
		quicksort(brr,low,j-1);
		quicksort(brr,j+1,high);
	}
}
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

