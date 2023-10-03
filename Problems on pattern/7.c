#include<stdio.h>


//accept no. frome user and display below pattern as
//i/p 3 o/p 3*6*9* i/p 5 o/ 3*6*9*12*15*
void Pattern(int iNo)//yachi cpmplexcity O(N) ahe karn ha ekdach firtoy N times mhnje i/p jr 3 asel tr to 3 velach firtoy
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
//	for(iCnt=3;iCnt<=(iNo*3);iCnt=iCnt+3)//ha loop pn brobr ahe pn ha smjayla avghd ahe mhnun aapn khalcha loop use kela ahe
	for(iCnt=1;iCnt<=iNo;iCnt++)//ith aapn ha for loop normal firtoy N pryant mhnje i/p pryant pn madhe aapn iCnt*3 kely karn o/p he 3 chya table chya format madhe yety mhnje 3,6,9,12,15as aapla loop normal firtoy pn aapn tyala madhe multipli by 3 krtoy karn to 3 chya patit ahe mhnje iCnt 1 aala tr 1*3=3,2*3=6,#*3=9 as aata ith 3 hi hardcoded value ahe jr aaplyala koni sangitl ki tith kay lihaych te tu user la vichar tr kay kraych jith iCnt*3 ahe tith fkt iCnt*iNo1 lihaych iNo1 mhnje main kdun aalel dusr i/p 
	{
		printf("%d*",iCnt*3);
	}
	printf("\n");
}
void Pattern1(int iNo,int iNo1)//he dusr function user lach vichart ki kitichya patit value pahije mhnun vrchya function madhe js hardcore 3 ahe ts ith he function aaplyala vichart.
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d*",iCnt*iNo1);
	}
}
int main()
{
	int iValue=0,iValue1=0,iValue2=0;
	//////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue);
	Pattern(iValue);
	///////////////////////////////
	printf("Enter the no:");
	scanf("%d%d",&iValue1,&iValue2);
	Pattern1(iValue1,iValue2);
	return 0;
}

