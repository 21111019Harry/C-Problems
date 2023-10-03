#include<stdio.h>



//accept no. from user and return that no. in reverse format revers no. should contain the digits from the orignal no. which are in between 3 and 7
//i/p 464 o/p 464 i/p 1389 o/p 0 i/p 7259 o/p 5 i/p 3065 o/p 56
int RevRange(int iNo)
{
	int iDigit=0,iRev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		if((iDigit>3) && (iDigit<7))//if((iDigit==4) || (iDigit==5) || (iDigit==6)) hi condi pn ith chali asti karn 3 peksha mothi aani 7 peksha lhan mahnjech 4,5,6 
		{
			iRev=(iRev*10)+iDigit;
		}
		iNo=iNo/10;
	}
	return iRev;
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=RevRange(iValue);
	printf("%d is reverse between 3 and 7.",iRet);
	return 0;
}
