#include<stdio.h>


//accept no from user and return multiplication of odd digits
//i/p 2681 o/p 1 i/p 731 o/p 21 -731 21 2266 0 1111 1
#define True 1
#define False 0
int MultDigit(int iNo)
{
	int iMult=0,iSum=0;//ith iMul 1 krn imp ahe karn to jr 0 la set kela tr aapl o/p kaym 0 yeil karn kontyahi no la jr 0 ne multiply kel tr ans 0 yet pn mg iMul 1 asla tr i/p jr even no aal tr to if chya aata jatch nahi aani last la iMult return krtoy mg tyat jr 1 asla tr ans 1 yety even no ch mhnun tyala ith 0 kraych aani loop madhe 1 kraych
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iSum=iNo%10;
		if((iSum%2)!=0)//ith aapn odd chi condi lavli ahe digit je odd asl trch aat jail
		{
			if(iMult==0)//ith to bahircha iMult 0 ahe to 1 honar ekdach mg iMult 1 zalyavr hi condi false honar mg if madhe nahi janar mg direct if chya khali janar
			{
				iMult=1;
			}
			iMult=iMult*iSum;
		}
		iNo=iNo/10;
	}
	return iMult;
}
int MultDigitX(int iNo)//he 2 function flag variable use krun solve kel ahe
{
	int iCnt=0,iSum=0;
	int flag=False;//ith flag khali ahe mhnje 0 ahe
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iSum=iNo%10;
		if((iSum%2)!=0)
		{
			if(flag==0)
			{
				flag=True;//ith flag vr ahe mhnje 1 ahe
			}
			flag=flag*iSum;
		}
		iNo=iNo/10;
	}
	return flag;
}
int main()
{
	int iValue=0,iRet=0,iValue1=0,iRet1=0;
	//////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=MultDigit(iValue);
	printf("The Mult is %d\n",iRet);
	/////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue1);
	iRet1=MultDigitX(iValue1);
	printf("The Mult is %d\n",iRet1);
	return 0;
}

