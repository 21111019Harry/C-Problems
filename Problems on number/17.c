#include<stdio.h>

//accept no from user and check weither no is perfect no or not.
#define YES 1
#define NO 0
typedef int bool;
bool CheckPerfect(int iNo)//yachi time complexity O(N/2) ahe yachi best case O(N/2) aani worst case O(N/2) ahe karn ha jevdh dily tevdh purn firty mhnje N/2
{	
	int iCnt=0;
	int iSum=0;
	if(iNo<0)//ha updater ahe negative i/p la positive krnara
	{
		iNo=-iNo;
	}
	else if(iNo==1)//ith hi condi lihili karn 1 pn perfect no ahe pn aapla for loop 1 la madhe jaudetch nahiye karn 1 cha N/2 houch shkt nahi mhnun 1 la aapn special handald kel ahe mhnje i/p jr 1 dil tr direct yes mhnje to perfect no ahe
	{
		return YES;
	}
	else if(iNo==0)//ith 0 ha perfect no nahiye pn i/p jr 0 dil tr tyala handeld krayla koni nahiye mhnun aapn he condi lihiliye 
	{
		return NO;
	}

	for(iCnt=(iNo/2);iCnt>=1;iCnt--)//ha loop ulta firnar jr ip 12 asel tr 6,5,4,3,2,1 asa 6 paun ka tr aapn iNo/2 ghetly mhnun  
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}

	}
/*	for(iCnt=1;iCnt<=(iNo/2);iCnt++)//ha loop srl firnar jr ip 12 asel tr 1,2,3,4,5,6 asa 6 pryantch ka tr aapn N/2 ghetly mhnun
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}*/
	if(iSum==iNo)
	{
		return YES;
	}
	else 
	{
		return NO;
	}
}
int main()
{
	int iValue;
	bool bRet=NO;//ith aapn bool ghetla karn function chi return valu bool ahe mhnun aani aapn tyala typedef kely int mhnun mhnje to sadhyapurta integer ahe aani tyat no taklay no mhnje 0 as aapn vrti #define kely mg bRet madhe 0 yenar  
	printf("Entet the no:");
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
