#include<stdio.h>
#include<stdlib.h>

int main()
{
//	int arr[], 
	int **arr = NULL, size = 0, iRow = 0, iCol = 0;
	int i = 0, j = 0;

//	printf("Enter the size:-");
//	scanf("%d",&size);

	printf("Enter the Row size:-");
	scanf("%d",&iRow);

	printf("Enter the Col size:-:");
	scanf("%d",&iCol);

	arr = (int**)malloc(iRow*sizeof(int*));

	for(i=0;i<iRow;i++)
	{
		arr[i] = (int *)malloc(iCol*sizeof(int));
	}
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Elements are:-\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	}
	
	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
