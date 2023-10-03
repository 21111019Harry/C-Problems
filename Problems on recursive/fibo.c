#include<stdio.h>

void fibo(int no);
int fiboR(int no);
int main()
{
	int iSize = 0;

	printf("Enter the Size:-");
	scanf("%d",&iSize);

	fibo(iSize);

	fiboR(iSize);

	return 0;
}
void fibo(int no)
{
	int first = 0, second = 1, i = 0, add = 0;
	for(i=0;i<no;i++)
	{
		add = first+second;
		printf("%d\t",first+second);
		first = second;
		second = add;
	}
}
int fiboR(int no)
{
	int i = 0;
	if(no==0)
	{
		return 0;
	}
	else if(no==1)
	{
		return 1;
	}
	printf ("%d",fiboR(no-1)+fiboR(no-2));
}
