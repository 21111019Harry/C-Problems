#include<stdio.h>

int kanaka(int n, int k);
int main()
{
	int i = 0, j = 0, iRet = 0;

	printf("Enter the NO:-");
	scanf("%d",&i);


	printf("Enter the NO:-");
	scanf("%d",&j);

	kanaka(i,j);

	printf("%d",iRet);

	return 0;
}
int kanaka(int n, int k)
{
	while(n==k)
	{
		if((n%2)==0)
		{
			n = n/2;
		}
		if((n%3)==0)
		{
			n = n/3;
		}
		else
		{
			n = n-1;
		}
		n--;
	}
	return n;
}
