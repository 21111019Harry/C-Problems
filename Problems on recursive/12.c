#include<stdio.h>
#include<malloc.h>

void rev(int *crr, int no, int *prr);
int main()
{
	int *arr = NULL, brr[20];
	int iSize = 0, i = 0;

	printf("Enter the Size:-");
	scanf("%d",&iSize);

	arr = (int *)malloc(iSize*sizeof(int));

	for(i=0;i<iSize;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&arr[i]);
	}

	rev(arr,iSize,brr);

	free(arr);

	return 0;
}
void rev(int *crr, int no, int *prr)
{
	int i = 0;
	for(i=0;i<no;i++)
	{
		if(crr[i]<0)
		{
			prr[i] = crr[i];
		}
		else if(crr[i]>0)
		{
			prr[i] = crr[i];
		}
	}
	for(i=0;i<no;i++)
	{
		printf("%d\n",prr[i]);
	}
}
