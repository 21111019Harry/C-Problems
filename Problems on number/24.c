#include<stdio.h>


//write a program which is use to perform power operation we have to accept 2 no.as x,y and return result the result as x^y
//i/p 10,2 o/p 100 ,i/p 10 -2 o/p 100
typedef unsigned long int ULONG;//ith aapn unsigned long int ghetly karn ha positive long integer value ahe mhnje yala 8byte memory milnar sadhya int la 4byte memory milte aani unsigned long int la aapn tatpurta ULONG mhntoy mhnje jith program madhe ULONG disla tith long integer consider hoil aani tyala 8byte memory milel aapn js bool la kraycho ts
ULONG  Power(int iNo1,int iNo2)//ith aapn iMult return krnar ahe pn iMult ha ULONG ahe mhnje unsigned long int ahe tr iMult madhe mothi value yeil mhnun aapn ith ULONG ghetly  
{
	int iCnt=0;
	ULONG iMult=1;
	if(iNo1<0 )//
	{
		iNo1=-iNo1;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
/*	if(iNo2==0)//ith aapn hi condi nahi lihili tri chalel karn jr iNo2==0 asl tr for loop tyala aat jauch det nahiye mg direct return iMult
	{
		return iMult;//ith aapn return 1 pn lihu shkt hoto pn iMult pn 1 ch return krtoy
	}
	if(iNo2==1)//ith hi condi nahi lihili tri chalel karn jr iNo2 jr 1 asla tri to loop madhe jaun 2nd time firtana condi false hoil aani iMult return hoil aani iMult madhe iNo1 chich value asel
	{
		return iNo1;
	}*/
	for(iCnt=1;iCnt<=iNo2;iCnt++)//ith <=iNo2 ghetly karn he nahi ghetl tr ha 1 iteration kami firel mhnje <iNo2 as ghrtl tr ha iNo2  vela nahi firnar tyachya aadhich thambnar 
//	for(iNo2>0;iNo2--;)//ith aapn without iCnt pn loop lihu shkto karn ith aapn iNo2 lach use krun solve krtoy
	{
		iMult=iMult*iNo1;
	}
	return iMult;
}
int main()
{
	int iValue=0,iValue1=0;
	ULONG iRet=0;//ith ULONG lihily karn function o/p ULONG mhnun pathvnar ahe tr mg te ghyala ULONGch pahije karn ti value mothi asnar ahe 
	printf("Enter the no:");
	scanf("%d\n%d",&iValue,&iValue1);
	iRet=Power(iValue,iValue1);
	printf("%ld is power of %d^%d",iRet,iValue,iValue1);//ith %ld lihily karn to yenar vareable long integer ahe mhnun
	return 0;
}
