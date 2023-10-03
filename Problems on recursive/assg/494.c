#include<stdio.h>


int FactI(int no);
int FactR(int no);
int FactRX(int no);
int main()
{
	int i = 0, iRet = 0, iRet1 = 0, iRet2 = 0;

	printf("Enter the NO:-");
	scanf("%d",&i);

	iRet = FactI(i);

	printf("%d\n",iRet);

	iRet1 = FactR(i);

	printf("%d\n",iRet1);

	iRet2 = FactRX(i);

	printf("%d",iRet2);

	return 0;
}
int FactI(int no)
{
	int iMult = 1, i = 0;

	for(i=1;i<=no;i++)
	{
		iMult = iMult*i;
	}
	return iMult;
}
int FactR(int no)//recursive using static variable
{
	static int iMult = 1;
	static int i = 1;
	if(i<=no)
	{
		iMult = iMult*i;
		i++;
		FactR(no);
	}
	return iMult;
}
int FactRX(int no)//recursive without using static variable
{
	if(no==1)
	{
		return 1;
	}

	return no*FactRX(no-1);
}
