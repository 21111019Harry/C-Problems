#include<stdio.h>


//accept no. from user and check weither that no. is palindrome or not
//i/p 747 o/p true i/p 7337 o/p true i/p 1531 o/p false i/p 7770 o/p false i/p 8 o/p true
#define True 1
#define False 0
typedef int bool;
bool Palindrome(int iNo)
{
	int iDigit=0,iRev=0,iTemp=0;
//	int iTemp=iNo;//ith jr iTemp la aapn initilize kel tr i/p jevha negative madhe yeyil tevha te kadhich palindrome honar nahi kahrn yachya khalch updater negative i/p positive krun pude pathvt mg shevti compair krnyachi vel yeil tevha aapn iRev aani iTemp la compair kru pn te kadhich true yenar nahi karn iTemp madhe negative value rahil aani iRev madhe positive tyamule tyala updater chya khali initilize kraych karn jr i/p negative aal tr te updater madhun jail aani positive hoil pn tyachya kahli iTemp madhe te orignalch store rahil mhnje negative 
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo<10)//he condi single digit la handel krte jr i/p single digit aal tr direct return True karn single digit ha palindrome no. asto
	{
		return True;
	}
	iTemp=iNo;//ith iTemp la initilize kel ahe tyachya iNo madhli value takli ahe
	while(iNo!=0)//(iNo>0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	if(iRev==iTemp)
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
	bool bRet=False;//ith aapn bool ghetly karn function cha return type bool ahe 
	printf("Enter the no:");
	scanf("%d",&iValue);
	bRet=Palindrome(iValue);
	if(bRet==True)
	{
		printf("%d is palindrome no:",iValue);
	}
	else
	{
		printf("%d is not palindrome no:",iValue);
	}
	return 0;
}
