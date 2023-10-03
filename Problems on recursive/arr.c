#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>

int arr(int *brr,int no, int isum);
int main()
{
	int *p = NULL;
	int iSize = 0, i = 0, iRet = 0, j = 0;

	printf("Enter the array Size:-");
	scanf("%d",&iSize);

	printf("Enter the Sum you want:-");
	scanf("%d",&j);

	p = (int *)malloc(iSize*sizeof(int));

	for(i=0;i<iSize;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&p[i]);
	}

	iRet = arr(p,iSize,j);

	if(iRet==true)
	{
		printf("True:");
	}
	else
		printf("False:");

	return 0;
}
int arr(int *brr, int no, int sum)
{
	int i = 0, j = no-1;
	while(i!=j)
	{
		if(brr[i]+brr[j]==sum)
		{
			return true;
		}
		else if(brr[i]+brr[j]>sum)
		{
			j--;
		}
		else if(brr[j]+brr[i]<sum)
		{
			i++;
		}
	}
	return false;
}
