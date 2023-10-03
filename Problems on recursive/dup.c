#include<stdio.h>
#include<malloc.h>

void dup(int *crr, int *prr, int no);
void dupR(int *crr, int *prr, int no);
int main()
{
	int *arr = NULL;
	int iSize = 0, i = 0;
	int brr[20];


	printf("Enter the Size:-");
	scanf("%d",&iSize);

	arr = (int *)malloc(iSize*sizeof(int));

	for(i=0;i<iSize;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&arr[i]);
	}

	dup(arr,brr,iSize);

	dupR(arr,brr,iSize);

	free(arr);

	return 0;
}
void dup(int *crr, int *prr, int no)
{
	int i = 0, j = 0;
	prr[0] = crr[0];
	for(i=0;i<no;i++)
	{
		if(crr[i]!=prr[j])
		{
			prr[++j] = crr[i];
		}
	}
	no = j+1;
	for(i=0;i<no;i++)
	{
		printf("%d\n",prr[i]);
	}
}
void dupR(int *crr, int *prr, int no)
{
	int i = 0, j = 0;
	prr[0] = crr[0];
	if(i<no)
	{
		if(crr[i]!=prr[j])
		{
			prr[j] = crr[i];
		}
		i++;
		no = j+1;
		dupR(crr,prr,no);
	}
}
