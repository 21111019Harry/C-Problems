#include<stdio.h>

//accept no. from user and display below pattern
//i/p 3 o/p -3* -2* -1* 0* 1* 2* 3*

void Pattern1(int iNo)
{
	int iCnt=0;
	if(iNo<0)//ha loop imp ahe karn jr i/p negative aal tr ha tyala positive krun pathvel ts nahikel tr i/p negative aala aani direct for llop madhe gela tr for loop madhe 1 st condi la positive houn jail karn negative negative positive hot mg aalela negative aani for madhla -iNo mg ha ositive houn jail aani loop i/p evdch firl mhnje i/p 6 asel tr 6 veles i/p 2 asel tr 2as 
	{
		iNo=-iNo;
	}
	for(iCnt=-iNo;iCnt<=iNo;iCnt++)//yachi complexcity O(2N)ahe karn ha 2 firtoy mhnje i/p jr 6 asel tr -6 to 6 as ekda ha N aani 1 to 6 as ekda ha prt N mhnje O(2N)
	{
		printf("%d*\t",iCnt);
	}

}
int main()
{
	int iValue=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	Pattern1(iValue);
	return 0;
}
