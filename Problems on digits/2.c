#include<stdio.h>


int DigitsAdd(int iNo)
{
	int iSum=0,iDigit=0;
//	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)//ith iNo<0 as pn chal ast karn yacha pn toch arth hoto iNo ha 0 chya khali aala tr condi false
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
	//	iSum=iSum+(iNo%10);//ith aapn direct iNo%10 kely yachyane aaplyala iDigit chi garj nahi lagnar
		iNo=iNo/10;
	}
	return iSum;

}
void Reverse(int iNo)//he function i/p ult print krt
{
	int iCnt=0,iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		printf(" %d",iDigit);
		iNo=iNo/10;
	}
}
int main()
{
	int iValue=0,iRet=0,iValue1=0;
	
	////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=DigitsAdd(iValue);
	printf("The addition is:%d\n",iRet);
	
	//////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue1);
	Reverse(iValue1);
	return 0;

}
