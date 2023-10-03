#include<stdio.h>


//accept row no. and column no. from user and display below pattern 
//i/p irow=4 icol=4 o/p  1  2  3  4      1,1 1,2 1,3 1,4
//			 5  6  7  8      2,1 2,2 2,3 2,4
//			 9 10 11 12	 3,1 3,2 3,3 3,4
//			13 14 15 16      4,1 4,2 4,3 4,4
void Pattern(int iRow,int iCol)
{
	int i=0,j=0,iCnt=1;//ith aapn 1 extra counter ghetla iCnt navacha karn i aani j he fkt firtil pn no. print krayla konitri pahije mhnun iCnt gehtla aani tyala 1 la set kela 
	for(i=1;i<=iRow;i++)//ha loop fkt 4 vela firnar aani yachi time complexity O(N^2) ahe karn ha nested loop ahe 
	{
		for(j=1;j<=iCol;j++)//ha prtek veles 4 timefirel mhnje outer loop 1 firla tr ha 4 veles firel aani iCnt++ krt jail 
		{
			printf(" %d\t",iCnt);
			iCnt++;
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter the row no:");
	scanf("%d",&iValue1);
	printf("Enter the column no:");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}
