#include<stdio.h>

//accept no from user and return the product(multiplication) of its digits
//i/p 750 o/p 35 i/p 152 o/p 10 i/p 7000 o/p 7 i/p 153 o/p 15
int Mult(int iNo)
{
	int iMult=0,iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
/*	if(iNo==0)//he filter ghetly karn jr i/p 000 aalt tr yane 0 return kela pahije pn he keva active kraych jevha vrcha iMult=1 asel tevha karn to 0 i/p la pn 1 return kril mhnun pn mg tevha ti if(iMult==0) hi condi nahi lihaychi karn ti pn tech krtey ti jo aadhi iMult madhe 0 delela ahe tyala 1 krte mg iMult madhe 1 yeto aani jr i/p 0 aal tr to 0 ch deil karn iMult madhe 0 kelela ahe  
	{
		return 0;
	}*/
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>0)//(iDigit!=0) ith aapn 0 la kadhtoy karn 0 la kontyahi number ne multiply kel tr ans 0 ch yet
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
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=Mult(iValue);
	printf("%d is the Multiplication",iRet);
	return 0;
}
