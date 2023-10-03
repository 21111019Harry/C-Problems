#include<stdio.h>


//accept no from user and check weither that no. is blanced no. or not mhnje i/p chya even aani odd digit chi addition same ahe ki nahi check kraychiye
//i/p 5278 o/p true
//aata ya question madhe aapn 2 counter mhnje 2 varible vaprle ahet ieven and iodd ase pn jr aata aaplyala ekch varible use krun ha question solve kraycha asel tr ek variable ghyaycha aapn 
//iCnt ghetlay mg if condi mahnje check even chi ji condi ahe tyat iCnt++ as lihaych aani else madhe iCnt-- aani tyachya khali if madhe check kraych ki jr iCnt 0 tr o/p true ahe nahitr false
typedef int bool;
#define True 1
#define False 0
bool Blanced(int iNo)
{
	int iDigit=0,iCnt=0;//ith aapn 1 counter use krun ha question solve kela ahe iCnt counter 
//	int ieven=0,iodd=0;//he jevha 2 counter use krun ha program kraycha asel tevha open kraych
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)
	{
		return False;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iCnt++;//ith aapn 1 counter use krun ha question solve kela ahe 
		//	ieven++;//yachyane je i/p yeil tyatle even digit kiti ahe aani odd digit kiti ahe yancha count blance hoil
		//	ieven=ieven+iDigit;//yachyane je i/p yeil tyalte even digit aani odd digit yanchi addition krun ti blance hoil
		}
		else
		{
			iCnt--;//-//-
		//	iodd++;//-//-
		//	iodd=iodd+iDigit;//-//-
		}
		iNo=iNo/10;
	}
	if(iCnt==0)
	{
		return True;
	}
	else
	{
		return False;
	}
}

int main()
{
	int iValue=0;
	bool bRet=0;//ith bool ghetly karn function cha return type bool ahe mhnun
	printf("Enter the no:");
	scanf("%d",&iValue);
	bRet=Blanced(iValue);
	if(bRet==True)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	
	return 0;

}
