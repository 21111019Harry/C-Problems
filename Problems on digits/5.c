#include<stdio.h>


//accept no from user and count the frequency of 7 in that no
//i/p 711 o/p 1,i/p 952 o/p 0,i/p 777 o/p 3,i/p -753 o/p 1

int Frequency(int iNo)//he function aaplya i/p madhe 7 kiti vela aaly te sangt
{
	int iCnt=0;
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)//ith aapn (iNo>0) as pn lihu shkto karn yancha earth same ahe
	{
		iDigit=iNo%10;
		if(iDigit==7)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}
int FrequencyX(int iNo,int iNo1)//he function aaplya i/p madhe konta no print kraycha te aaplyalach vichart
{
	int iCnt=0,iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==iNo1)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue=0,iRet1=0;
	ULONG iValue1=0,iValue2=0;
	ULONG iRet=0;
	/////////////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=Frequency(iValue);
	printf("the frequency of 7 is %d\n",iRet);
	//////////////////////////////////////////////
	
	printf("Enter the no: 2 times:");
	scanf("%d %d",&iValue1,&iValue2);
	iRet1=FrequencyX(iValue1,iValue2);
	printf("The frequency of %d is %d",iValue2,iRet1);
	return 0;
}
