#include<stdio.h>


//accept no. from user display its digits.using both recursion and itteration
//i/p 157 o/p 7 5 1

void DisplayI(int no);
void DisplayR(int no);
void DisplayRec(int no);
int main()
{
	int i = 0;

	printf("Enter the NO:-");
	scanf("%d",&i);

	DisplayI(i);
	DisplayR(i);
	DisplayRec(i);
}
void DisplayI(int no)//using itteration
{
	int iDigit = 0;
	while(no>0)
	{
		iDigit = no%10;
		printf("%d\t",iDigit);
		no = no/10;
	}
	printf("\n");
}
void DisplayR(int no)//using recursion
{
	int iDigit = 0;
	if(no>0)//ith aata aapn recursion use krun i/p ult print krtoy same itteration sarkh ahe
	{
		iDigit = no%10;
		printf("%d\t",iDigit);
		no = no/10;
		DisplayR(no);
	}
	printf("\n");
}
void DisplayRec(int no)//using recursion but same i/p same o/p
{
	int iDigit = 0;
	if(no>0)//ith aapn recursive use krun prt i/p ch print krtoy hi recursion chi power ahe i/p 123 o/p 123
	{
		iDigit = no%10;//ith aapn aadhi last digit kadhun ghetla 
		no = no/10;//ith aapn last degit delete kela 
		DisplayRec(no);//ith aapn to delete kelela digit swatahalach pathvla
		printf("%d\t",iDigit);//mg to ith print kela 
	}
} 
