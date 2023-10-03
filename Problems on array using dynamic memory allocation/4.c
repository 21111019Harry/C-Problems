#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//accept n no. from user update that n numbers in such a way,if no. is even then increment its value by 4,if no. is odd then decrement its value by 3
//i/p n=6 elements=12 15 8 5 20 9 o/p 16 12 12 2 24 6 
//void Modify (int *arr,int);
void Modify(int arr[],int);//ith aapn arr[] chya jagevr *arr pn use kru shkto
int main()
{
	int iSize=0,iCnt=0;
	int *p=NULL;


	printf("Enter the no.");
	scanf("%d",&iSize);

	p=(int*)malloc(iSize*sizeof(int));


	if(p==NULL)
	{
		printf("Unable to allocate memory:");
		return -1;
	}

	printf("Enter the Elements:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	Modify(p,iSize);

	printf("Updated arry is: ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("%d\t",p[iCnt]);
	}

	free(p);
	
	return 0;
}
//void Modify(int *arr,int iNo)//ith as vaat ki fkt address yetoy integercha mg to single byte pn asu shkto pn jo khalcha syntax ahe to bghunch vaaty ki address yetoy arraycha mhnun aapn to lihlya
void Modify(int arr[],int iNo)//ith aapn arr[] chya jagevr *arr pn use kru shkto
{
	int iCnt=0;

	if((arr==NULL)  || (iNo<=0))
	{
		return ;
	}

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{
			arr[iCnt]=arr[iCnt]+4;
		}
		else
		{
			arr[iCnt]=arr[iCnt]-3;
		}
	}
}
