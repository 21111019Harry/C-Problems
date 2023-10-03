#include<stdio.h>

//////////////////////////
//name:Division
//input:int,int
//output:int
//discription:division
//other:harshal
//date:4-9-2019
/////////////////////////

#define False -1
int Division(int iNo1,int iNo2)//ya division chya program madhe filter lihaycha chance ahe addition,subtraction,multiplication ya thighanmadhe filter lihaycha chance nahiye
{
	int iAns=0;
	if(iNo2==0)//he filter ahe 2 no chi division krtana 2nd no jr 0 asel tr division hot nahi mhnun aapn he filter lavl ahe 
	{
		return False;//return -1 mhnje arronies mhnje  
	}
	iAns=iNo1/iNo2;//prattek if nantr else asto as nahiye kadhi kadhi else chi garj naste
	return iAns;
}
////////////////////////
//Entry point function
///////////////////////
int main()
{
	printf("-----aata ith division chya fun madhe return -1 ghetly pn te redble nahi ye mg tith aapn true successful as kahihi gheu shkto fkt te aadhi #define krav lagt--------\n");
	int iH=0,iP=0;
	int iRet=0;
	printf("Enter the no:\n");
	scanf("%d\n%d",&iH,&iP);
	iRet=Division(iH,iP);
	if(iRet==-1)
	{
		printf("Second no 0 is not allowed");
	}
	else
	{
		printf("Division is %d",iRet);
	}
	return 0;
	
}
