#include<stdio.h>


void pattern(int iNo,int iNo1)
{
	int i=0,j=0;
	for(i=1;i<=iNo;i++)
	{
		if((i%2)==0)
		{
			for(j=-1;j<=iNo1;j++)
			{
				printf("%d\t",j);
			}
		}
		else
		{
			for(j=1;j<=iNo1;j++)
			{
				printf("%d\t",j);
			}
		}
		printf("\n");
	}
	
}




int main()
{
	int i=0,j=0;
	printf("Enter the no:");
	scanf("%d",&i);
	printf("Enter the no:");
	scanf("%d",&j);
	pattern(i,j);
	return 0;
}
