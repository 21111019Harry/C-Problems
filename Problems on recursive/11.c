#include<stdio.h>
#include<malloc.h>
#include<limits.h>//hi max,min chi library ahe mhnje max mhnje sglyat last cha maximum no. min mhnje sglyat 
                  //aadhicha chota no.


int min(int *crr, int no);
int minR(int *crr, int no, int min1);
int main()
{
	int *arr = NULL;
	int iSize = 0, i = 0, iRet = 0, iRet1 = 0;

	printf("%d\n",INT_MAX);
	printf("Enter the Size:-");
	scanf("%d",&iSize);

	arr = (int *)malloc(iSize*sizeof(int));

	for(i=0;i<iSize;i++)
	{
		printf("Enter the Element:-");
		scanf("%d",&arr[i]);
	}

	iRet = min(arr,iSize);

	printf("%d\n",iRet);

	iRet1 = minR(arr,iSize-1,INT_MAX);

	printf("%d",iRet1);

	free(arr);

	return 0;
}
int min(int *crr, int no)
{
	int i = 0, min1 = 0;
	for(i=0;i<no;i++)
	{
		if(i==0)
		{
			min1 = crr[i];
		}
		if(crr[i]<min1)
		{
			min1 = crr[i];
		}
	}
	return min1;
}
int minR(int *crr, int no, int min1)
{
	if(no==-1)
	{
		return min1;
	}
	if(crr[no]<min1)
	{
		min1 = crr[no];
	}
	no--;
	minR(crr,no,min1);
}
