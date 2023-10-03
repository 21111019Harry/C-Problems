#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Hprint(int iRow ,int);

int main()
{
/*	int iSize=0,iCnt=0;
	int *p=NULL;

	printf("Enter the no:");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));

	printf("Enter the no:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	Hprint(p,iSize);

	free(p);
	return 0;*/

	int i=0,j=0;
	printf("Enter the row:");
	scanf("%d",&i);
	printf("Enter the col:");
	scanf("%d",&j);
	Hprint(i,j);
	return 0;
}
int Hprint(int iRow,int iCol)
{
	int i=0,j=0;
	printf("");
	if((iRow<0) && (iCol<0) && (iCol<iRow))
	{
		printf("Invalid Input:");
	}
	for(i=0;i<iRow;i++)
	{
		// for(j=0;j<iCol;j++)
		// {
			/*
			if(i==iRow/2)
			{
				printf("* ");
			}
			else if((j==1) || (j==5))
			{
				printf("*      *");
			}
			*/
			if(i==iRow/2){
				for(int i=0; i<iRow; i++)
					printf("*");
			}
			else{
				printf("*");
				for(int i=2; i<iCol; i++){
					printf(" ");
				}
				printf("*");
			}
		// }
		printf("\n");
	}
}
