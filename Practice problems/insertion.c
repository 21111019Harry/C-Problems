#include<stdio.h>
#include<stdlib.h>

void Insertion(int brr[],int);

int main()
{
	int a=0,arr[10],iCnt=0;
	printf("Enter the no:");
	scanf("%d",&a);
	
	printf("Enter the Element:");
	for(iCnt=0;iCnt<a;iCnt++)
	{
		scanf("%d",&arr[iCnt]);
	}
	
	Insertion(arr,a);

	printf("After sorting: ");
	for(iCnt=0;iCnt<a;iCnt++)
	{
		printf("%d\t",arr[iCnt]);
	}
	return 0;
}
void Insertion(int brr[],int p)
{
	int i=0,j=0,temp=0;
	for(i=1;i<p;i++)
	{
		temp = brr[i];

		for(j=i-1;j>=0 && temp<brr[j];j--)
		{
			brr[j+1] = brr[j];
		}
		brr[j+1] = temp;
	}
}

