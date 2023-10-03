#include<stdio.h>

void fact(int no);
int main()
{
	int i = 0;

	printf("Enter the NO:-");
	scanf("%d",&i);

	fact(i);

	return 0;
}
void fact(int no)
{
	int i = 0;
	for(i=1;i<=no/2;i++)
	{
		if((no%i)==0)
		{
			printf("%d\n",i);
		}
	}
}
