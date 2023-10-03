#include<stdio.h>

//i/p irow=4 icol=4 o/p A B C D
//			A B C D
//			A B C D
//			A B C D
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='A';
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='A';j<=iCol;j++)//ith he ch='A' takn far imp ahe karn te for cha 1 itteration purn zalyavr prt A paun suru zal pahije mhnun te jr nahi kel tr te A B C D E F G as firt rahil mhnun 
		{	
			printf(" %c\t",ch);
			ch++;
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
