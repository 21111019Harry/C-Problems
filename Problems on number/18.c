#include<stdio.h>


//check weither no is perfect or not with the list complexity


#define YES 1
#define NO 0
typedef int bool;

bool CheckPerfect(int iNo)
{
	int iSum=0,iCnt=0;

	if(iNo<0)//ha updater ahe i/p jr negative asel tr ha tyala positive krun pud pathvto
	{
		iNo=-iNo;
	}
	if(iNo==1)
	{
		return YES;
	}
	for(iCnt=iNo/2;(iCnt>=1) && (iSum<=iNo);iCnt--)//ith if lihun break krata yeil
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	/*	if(iSum>=iNo)//hi condi loop madhe iSum<=iNo he n lihita jr hi condi lihili tri chalel ha if aaplyala direct ithun loop chya baher kadhtoy pn ti loop madhli condi hi pudhe jau dete mg bhaer kadhte 
		{
			break;
		}*/
	}
	if(iSum==iNo)
	{
		return YES;
	}
	else 
		return NO;
}
int main()
{
	int iValue=0;
	bool bRet=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	bRet=CheckPerfect(iValue);
	if(bRet==YES)
	{
		printf("%d is perfect no:",iValue);
	}
	else
	{
		printf("%d is not perfect no:",iValue);
	}
	return 0;
}
