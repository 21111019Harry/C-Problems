#include<stdio.h>


void perfect(int no);
int main()
{
	int i = 0;

	printf("Enter the NO:-");
	scanf("%d",&i);

	perfect(i);

	return 0;
}
void perfect(int no)
{
	int i = 0, sum = 0;
	for(i=1;i<no;i++)
	{
		if((no%i)==0)
		{
			sum = sum+i;
		}
	}
	if(sum==no)
	{
		printf("Perfect:");
	}
	else
	{
		printf("NOT:");
	}
}
