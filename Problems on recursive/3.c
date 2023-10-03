#include<stdio.h>

//accept no. from user and print that no. of star

void DisplayR(int no);
int main()
{
	int i = 0;
	printf("Enter the NO:-");
	scanf("%d",&i);

	DisplayR(i);
	return 0;
}
void DisplayR(int no)
{
	int i = 1;//ith static lihaychi garj nahiye jr aapn recursion ult firvt asu tevha mhbnje aapn aalel i/p he ult firvtoy te 1 hot nahi topryant.
	if(i<=no)
	{
		printf("*\t");
		no--;
		DisplayR(no);
	}
}
