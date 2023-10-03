#include<stdio.h>
#include<malloc.h>

//accept N no from user and update that N no in such way if no. is even then increment its value by 4 and its odd then decrement by 3.
//n=6 element=12,15,8,5,20,9 o/p 16,12,12,2,24,6


void Add(int i_No,int arr[]);
int main()
{
	int i_Size = 0,i_Cnt = 0;
	int *p = NULL;

	printf("Enter the NO:");
	scanf("%d",&i_Size);

	p=(int *)malloc(i_Size*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate Memory:");
		return -1;
	}

	for(i_Cnt=0;i_Cnt<i_Size;i_Cnt++)
	{
		printf("Enter the Element%d:-",i_Cnt+1);
		scanf("%d",&p[i_Cnt]);
	}

	Add(i_Size,p);

	for(i_Cnt=0;i_Cnt<i_Size;i_Cnt++)
	{
		printf("%d\t",p[i_Cnt]);
	}

	free(p);

	return 0;
}
void Add(int i_No,int arr[])
{
	int i_Cnt = 0, iCnt = 0;

	

	for(iCnt=0;i_Cnt<i_No;i_Cnt++)
	{
		if((arr[i_Cnt]%2)==0)
		{
			arr[i_Cnt]=arr[i_Cnt]+4;
		}
		else
		{
			arr[i_Cnt]=arr[i_Cnt]-3;
		}
	}
}
