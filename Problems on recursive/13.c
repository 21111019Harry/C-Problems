#include<stdio.h>

//accept no from user and return sumatioins of its factores.

//get recursion limit,set recursion limit he 2 keyword python madhe aahet ye keywords ne aapn kiti stack frame create kru shkto te klt.ts c and cpp madhe nahi ye mhnun aapn ith jast recursion use kru shkt nahi.

int fact(int no);
int factR(int no);
int factRX(int no, int sum, int i);
int main()
{
	int i = 0, iRet = 0, iRet1 = 0, iRet2 = 0;
	printf("Enter the NO:");
	scanf("%d",&i);

	iRet = fact(i);

	printf("%d\n",iRet);

	iRet1 = factR(i);

	printf("%d\n",iRet1);

	iRet2 = factRX(i,0,1);

	printf("%d",iRet2);

	return 0;
}
int fact(int no)
{
	int i = 0, sum = 0;
	for(i=1;i<=no/2;i++)
	{
		if((no%i)==0)
		{
			sum = sum+i;
		}
	}
	return sum;
}
int factR(int no)
{
	static int sum = 0;
	static int i = 1;
	if(i<=no/2)
	{
		if((no%i)==0)
		{
			sum = sum+i;
		}
		i++;
		factR(no);
	}
	return sum;
}
int factRX(int no, int sum, int i)
{
	if(i==no)
	{
		return sum;
	}
	if((no%i)==0)
	{
		sum = sum+i;
	}
	i++;
	factRX(no,sum,i);
}
