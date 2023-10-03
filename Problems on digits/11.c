#include<stdio.h>


//accept no from user and return the product of even digits from that no.
//i/p 753 o/p 0 i/p 275 o/p 2 i/p 2617 o/p 12 i/p 2016 o/p 12 i/p 1000 o/p 0
//note:-solve this q without using flag
int EvenProduct(int iNo)
{
	int iDigit=0,iMult=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0 && (iDigit!=0) )//he 2nd condi mhnje idigit ha 0 nahiye ka to jr 0 nsla trch to aaplyala aat jau deil aani idigit jr 0 aala tr to aaplyala aat nahi jau denaraani iDigit madhe 0 yeu shkto karn 0 ha even no ahe jr ya if madhlya 2 condi true aslya tr aapn if madhe jau karn && ahe mhnun doghi condi true pahije hi 2nd condi nahi lihili tri chalel 
		{
			if(iMult==0)
			{
				iMult=1;
			}
			iMult=iMult*iDigit;
		}
		iNo=iNo/10;
	}
	return iMult;
}
int EvenProductX(int iNo)//he 1st function ch updated function ahe 
{
	int iDigit=0,iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0 && (iDigit!=0) )
		{
			iMult=iMult*iDigit;
		}
		iNo=iNo/10;
	}
	if(iMult==1)//ith iMult check krtoy karn jr i/p 0 aal tr aaplyala 0 return kraycha ahe pn aapn aadhi iMult 1 kela ahe mhnun aata ith aapn iMult 0 kela ahe aani mg yachya khali return iMult kely tr iMult madhe aapn ith 0 takly tr to khali 0 return kril
	{
		iMult=0;
	}
	 return iMult;//ith iMult return krtoy mhnje jr iMult madhe 1 sodun dusri value aali tr direct tich value return krtoy if madhe iMul*iDigit kely tr tith iMult madhe ji value yeil tich value aapn khali return krtoy
}
int OddProduct(int iNo)
{
	int iDigit=0,iMult=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)!=0 && (iDigit!=0) )
		{
			if(iMult==0)
			{
				iMult=1;
			}
			iMult=iMult*iDigit;
		}
		iNo=iNo/10;
	}
	return iMult;
}
int main()
{
	int iValue=0,iRet=0;
	int iValue1=0,iRet1=0;
	int iValue2=0,iRet2=0;
	////////////////////////////////////////////
	printf("Enter the No:");
	scanf("%d",&iValue);
	iRet=EvenProduct(iValue);
	printf("%d is the Even product of %d\n",iRet,iValue);
	//////////////////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue1);
	iRet1=EvenProductX(iValue1);
	printf("%d is the Even product of %d\n",iRet1,iValue1);
	/////////////////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue2);
	iRet2=OddProduct(iValue2);
	printf("%d is the Odd product of %d",iRet2,iValue2);
	return 0;
}
