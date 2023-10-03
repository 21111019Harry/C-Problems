#include<stdio.h>

void prime(int no);
int main()
{
	int i = 0;

	printf("Enter the NO:-");
	scanf("%d",&i);

	prime(i);

	return 0;
}
void prime(int no)
{
	int i = 0, sum = 1;
	for(i=2;i<no/2;i++)
	{
		if((no%i)==0)
		{
			sum = sum+i;
			break;
		}
	}
	if(sum==1)
	{
		printf("Prime:");
	}
	else
	{
		printf("NOT:");
	}
}
