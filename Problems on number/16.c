#include<stdio.h>


//accept no from user that no largest factor display



int LFDisplay(int iNo)//ith best case time complexity yenar O(1) jevha i/p aapn prime no deu tevha aani worst case time complexity yenar O(N/2) jevha i/p aapn evan no denar tevha best,worst,average ya cases loop madhe jr break asl trch yetat best,worst,average ya cases i/p vr thrtat
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int iCnt=0;
	for(iCnt=iNo/2;iCnt>=1;iCnt--)//ha loop ulta firnar ahe mhnje ip 12 asel tr 6,5,4,3,2,1 asa mhnje ha ulta firun ji first value yenar ti print krnar karn tich largest value asnar
	{
		if((iNo%iCnt)==0)//he condi check krnar ki yenari value he ip value chi factor ahe ki nahi asli tr break aani return ti value mhnje ti largest valu zali
		{
			break;
		}
		
	}
/*	int iSum=0,iCnt=0;
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)//ha loop srl firto mhnje ip 12 asel tr 1,2,3,4,5,6 asa mhnje ha srl firun ji last value yeil ti print krnar karn tich largest value asnar
	{
		if((iNo%iCnt)==0)
		{
			return iCnt;
		}
	}*/

	return iCnt;

	
}
int main()
{
	int iValue,iRet;
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=LFDisplay(iValue);
	printf("The largest Factor is %d",iRet);
	return 0;

}
