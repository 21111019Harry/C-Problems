#include<stdio.h>
#include<malloc.h>

void dup(int brr[], int iSize, int prr[]);
int main()
{
	int i = 0, iCnt = 0;
	int crr[30];
	int *p = NULL;

	printf("Enter the size of array:");
	scanf("%d",&i);

	p = (int*)malloc(i*sizeof(int));

	for(iCnt=0;iCnt<i;iCnt++)
	{
		printf("Enter the Element%d:-",iCnt);
		scanf("%d",&p[iCnt]);
	}

	dup(p,i,crr);

	free(p);

	return 0;
}
void dup(int *arr, int iSize, int *prr)
{
	int a = 0;
	int k = 0;
	prr[0] = arr[0];
	for(a=0;a<=iSize;a++)
	{
		if(prr[k]!=arr[a])
		{
			prr[++k] = arr[a];
		}
	}
	iSize=k;
	for(a=0;a<iSize;a++)
	{
		printf("%d\n",prr[a]);
	}
}
