#include<stdio.h>


//ha program jr i/p 8 asel tr -8,-7,...as 8 pryant print kraychy asa ahe mhnje i/p negative to positive print kraychey 
void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=-iNo;iCnt<=iNo;iCnt++)//yachi time complexity O(2N) ahe karn ha 9 veles firnar ahe N mhnje 4 as donda mhnje 2N 
	{
		printf("%d\n",iCnt);
	}
}
int main()
{
	int iValue;
	printf("Enter the no:");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
