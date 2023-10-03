#include<stdio.h>

int sum(int no);
int sumR(int no);
int sumRX(int no, int sum);
int main()
{
	int i = 0, iRet = 0, iRet1 = 0, iRet2 = 0, j = 0;
	printf("Enter the NO:-");
	scanf("%d",&i);

	iRet = sum(i);

	printf("%d\n",iRet);

	iRet1 = sumR(i);

	printf("%d\n",iRet1);

	iRet2 = sumRX(i,j);

	printf("%d",iRet2);
	return 0;
}
int sum(int no)
{
	int isum = 0, iDigit = 0;
	while(no>0)
	{
		iDigit = no%10;
		isum = isum+iDigit;
		no = no/10;
	}
	return isum;
}
int sumR(int no)//using static
{
	static int isum, iDigit = 0;
	if(no>0)
	{
		iDigit = no%10;
		isum = isum+iDigit;
		no = no/10;
		sumR(no);
	}
	return isum;
}
int sumRX(int no,int sum)//without using static
{
	if(no==0)
	{
		return sum;
	}
	sum=sum+no%10;
	no = no/10;
	sumRX(no,sum);
}
