#include<stdio.h>
#include<limits.h>

int smallI(int no, int sm);
int smallR(int no, int imin);
int main()
{
	int i = 0, iRet = 0, iRet1 = 0, j = 0;

	printf("Enter the NO:-");
	scanf("%d",&i);

	iRet = smallI(i,INT_MAX);

	printf("%d\n",iRet);

	iRet1 = smallR(i,INT_MAX);

	printf("%d\n",iRet1);

	return 0;
}
int smallI(int no,int sm)
{
//	int min = 0;
//	min = no%10;
//	no = no/10;
	while(no>0)
	{
		if(sm>no%10)
		{
			sm = no%10;
		}
		no = no/10;
	}
	return sm;
}
int smallR(int no, int imin)
{
	if(no==0)
	{
	//	no = 0;//ith aapn recursion break kel return n krta ya statement mule js aapn loop madhe break lihito ts 
		return imin;
	}
	if(imin>no%10) 
	{
		imin = no%10;
	}
	return smallR(no/10,imin);
}
