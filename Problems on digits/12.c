#include<stdio.h>

//accept no from user and return revers of that no.
//i/p 1234 o/p 4321 i/p -456 o/p 654
#define True 1;
#define False 0;
typedef int bool;
int RevDigit(int iNo)//he function i/p la revers krun pathvt
{
	int iDigit=0,iRev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)//(iNo!=0)ith ashi condi pn chalte
	{
		iDigit=iNo%10;//yachya ne shevtcha no. seperate kadhun milnar 
		iRev=(iRev*10)+iDigit;//ha to formula ahe no. revers kraycha ith iRev madhe aapn 0 ghetla ahe aani tyala *10 kel ahe 10 ka tr aapn decimal numbering system consider krtoy mhnun aani to digit mhnje mod (%) operation krun jo no. aala ahe to aapn idigit madhe store kela ahe yaanch answer aapn iRev madhe store krtoy aani sheti iRev return krtoy
		iNo=iNo/10;//yachyane i/p madhla shevtcha no. delete hot janar
	}
	return iRev;
}
int RevDigitX(int iNo)//he function jr i/p negative aal tr o/p pn negative madhe reverse krun pathvt mhnje i/p -1234 o/p -4321 as
{
	//aata aapn ith flag use kela ahe karn aaplyala i/p jr negative aal tr o/p pn negative madhech pathvaych ahe mhnun aapn tyasathi aadhi flage variable ghetla aani tyala false la set kela mhnje 0 la mg updater madhe tyala True kela mhnje 1 kela karn jr i/p negative value asel tr tyala vegl handel krav lagel mg updater madhe aala mhnje to negative ahe mhnun tyala aapn 1 kela aani return krtana if madhe fkt compair kraych ki jr flag True asla tr i/p negative ahe mg -iRev as return kraych aani ha iRev variable madhe aapn while madhe operation krun tyat i/p cha revers no. ahe mhnun aapn to return krtoy mg else madhe fkt return iRev kraych karn else madhe aalo mhnje i/p negative nahi mg fkt return iRev kraych    
	int iDigit=0,iRev=0;
	bool flag=False;//ith aapn flag off kelay mhnje to 0 ahe aani ith bool ghetlay karn flag ha boolen variable ahe mhnje to 1 or 0 asto mhnje ON or OFF  
	if(iNo<0)
	{
		iNo=-iNo;
		flag=True;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;

	}
	if(flag==1)
	{
		return -iRev;
	}
	else
	{
		return iRev;
	}
}
int main()
{
	int iValue=0,iValue1=0,iRet=0;
	int iRet1=0;
	///////////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=RevDigit(iValue);
	printf("%d is the revers no of %d\n",iRet,iValue);
	printf("%d\n",iValue);//aata ith aapn iValue print keli ahe karn ti change zali ahe ka nahite check kraycla karn ikdun aapn function iValue madhe value pathvali aani function ti iNo madhe ghetli aani function ne aaplyala iRev madhe o/p pathvl tr tyamule ithli iValue ji ahe tich rahil karn he call by value ahe mhnun karn call by value madhe varible madhli value pathvtat direct address nahi call by address madhe aapn function la address pathvto  
	/*if(iRet==iValue)//he condi check krte ki no ha plaindrome ahe ki nahi te he aapn main madhe pn lihu shkto pn aaapn sangitlya prmane 3 function lihun mg campair krnar aahot ki no plaindrome ahe ki nahi te main,checkplaindrome,revers he 3 function
	{
		printf("%d is plaindrome of %d\n",iRet,iValue);
	}
	else
		printf("False\n");*/
	///////////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue1);
	iRet1=RevDigitX(iValue1);
	printf("%d is the revers no of %d",iRet1,iValue1);
	return 0;
}
