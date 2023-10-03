#include<stdio.h>
#include<stdbool.h>

//accept no from user and check weather 23rd bit is on or off.

//how to make a mask using hexadecimal bcz hame 10 or 20 bit tak bit 1 he ya 0 he wo find krte aata tha but ab hame 23 bit 1 he ya 0 ye find krna hai isliye hame mask design krna he bcz 10 20 ka hame pta tha but 23 ke liye bhut calculation lagega isliye ham yha mask find krne ke liye hexadecimal ka use krenge.
//aata hex to binary convert krayla 1 hex digit la 4 bit lagle. tr 32 bit madhe 4,4 che kiti pices pdtil tr 8 pices padtil.

typedef unsigned int UINT;
bool CheckBit(UINT iNo);
int main()
{
	 UINT iValue = 0;
	 int bRet = 0;

	 printf("Enter the No:");
	 scanf("%d",&iValue);

	 bRet=CheckBit(iValue);

	 if(bRet==true)
	 {
		printf("Bit is on:");
	 }
	 else
	 {
		printf("Bit is off:");
	 } 
	return 0;
}
bool CheckBit(UINT iNo)
{
	UINT iRes = 0, iMask =0x00020000;//ith iMask hardcode value ghetli ahe.

	iRes = iNo & iMask;

	if(iRes==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}



/*

	---------------------------------------------
	|0000  0000|0100  0000|0000  0000|0000  0000|							
	---------------------------------------------
      100  0     0    4     0    0     0    0    0   104

      tr ith 23rd bit ha 1 ahe mhnje 23rd bit 1 ahe tr tyach hexa decimal madhe ks convert hoil tr jo 1 ahe tyachi tyachya box madhe value check kraychi mhnje 8 4 2 1 yatun tr ti 4 ahe mhnun tith aapn 4 ghetl ahe aani baki sgle 0 krayche asch saglyanch kraych tr he final 0x00400000 as disel .mhnje 1 to 36 bit pryant kontahi bit check krayla lavla tr to asa check kraycha.mhnje aata he aapn i/p sobat compair kraych aani hi condi true aali tr o/p true ahe.
 yat aapn 0xffffffff ha largest no aapn store kru shkto. bcz f mhnje 15 aani hex cha 15 last asto.
 int no=10; decimal ha bydefault decimal asto,int no=0x10; hexadecimal, int no=o10; octal.

 tr ith iMask=0x00400000 chi value ahe ti aapn calculate krun kadhli ahe.tsch aaplyala pratek eg madhe iMask chi value kadhavi lagel bcz ti aaplyala i/p sobt compair krayla lagel.
 */
