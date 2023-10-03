#include<stdio.h>

//accept no. from user and display below pattern 
//i/p 4 o/p 1234 ha squre pattern ahe
//	    1234
//	    1234
void Pattern(int iNo)//yachi time complexity O(N^2) ahe karn ha nested loop ahe
{
	int iRow=0,iCol=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iRow=1;iRow<=iNo;iRow++)
	{
		for(iCol=1;iCol<=iNo;iCol++)
		{
			printf("%d\t",iCol);
		}
		printf("\n");
	}
}
int main()
{
	int iValue=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}
