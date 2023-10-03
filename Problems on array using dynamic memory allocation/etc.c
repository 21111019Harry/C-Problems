#include<stdio.h>
#include<malloc.h>

void add(int *arr, int *brr, int length);
int main()
{
	int *p = NULL;
	int *q = NULL;
	int size  = 0, i = 0, size1 = 0;

	printf("Enter the size of array:");
	scanf("%d",&size);

	p = (int*)malloc(size*sizeof(int));

	q = (int*)malloc(size1*sizeof(int));
	
	for(i=0;i<size;i++)
	{
		printf("Enter the %d Element:",i);
		scanf("%d",&p[i]);
	}
	add(p,q,size);
	free(p);
	free(q);
	return 0;
}
void add(int *arr, int *brr, int length)
{
	int i = 0, j = 0, iMult = 0;

	for(i=0;i<length;i++)
	{
		iMult = 1;
		for(j=0;j<length;j++)
		{
			if(i!=j)
			{
				iMult = iMult*arr[j];
			}
		}
		brr[i] = iMult;
	}
	for(i=0;i<length;i++)
	{
		printf("%d\t",brr[i]);
	}
    printf("\n");
}	
