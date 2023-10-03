#include<stdio.h>


//accept no. from user and check weither its palindrome or not 
//ha to program ahe jyachyat 3 function use krun no. palindrome ahe ki nahi te check kel ahe main,CheckPalindrome,Reverse ase 3 function ahet main calls to checkpalindrome,checkpalindrome call to Reverse aani mg Reverse return to CheckPalindrome CheckPalindrome return to main asa program cha flow ahe ha program aapla 2 function madhe houn gela asta pn to reusable nsta mhun aapn 3 functio lihun ha program getla ahe yachyat main fuction CheckPalindrome function la call krt aani CheckPalindrome function Reverse function la call krt mg user ne dilel i/p main Check Plaindrome function kde det aani checkPlaindrome function te i/p iNo madhe ghet aani te i/p jr negative asl tr CheckPlaindrome function tyala positive krt aani jr te i/p positivech asl tr direct Reverse function la pass krt aani mg Reverse function tyala i/p tyachya iNo madhe ghet aani tya i/p la ult mhnje reverse krun iRev madhe store krt aani mg iRev CheckPalindrome function la pass krt mg CheckPalindrome tyala if chi condi laun check krto ki to palindrome ahe ki nahi te mg te True or False return krt main la mg main tith display krt ki to no. palindrome ahe ki nahi te
#define True 1
#define False 0
typedef int bool;
int Reverse(int iNo)
{
	int iDigit=0,iRev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}
bool CheckPalindrome(int iNo)
{
	int iRet=0;
	if(iNo<0)//ith hi condi nahi lihili tr main kdun yenar i/p jr negative asl tr he function tyala jschya ts revers la pathun deil aani revers tyala positive krun ghil aani return kril mg te prt ya function kde yeil aani he function tyala main kade pathvil tevha main tya o/p la aani iValue madhlya i/p la compair kril pn te kadhich true honar nahi karn iValue madhe negative i/p rahil mhnun tyala ith updater laun positive kraych imp ahe 
	{
		iNo=-iNo;
	}
	iRet=Reverse(iNo);
	if(iRet==iNo)//ith check krtoy ki revers function ne dilel o/p mhnje iRet mdhl  aani main ne dilel i/p mhnje iNo mdhl same ahe ka nahi te 
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
	bool bRet=0;
	printf("Enter the No:");
	scanf("%d",&iValue);
	bRet=CheckPalindrome(iValue);
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
