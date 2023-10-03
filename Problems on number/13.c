#include<stdio.h>

//accept ano from user and return the sumation of its factors
//ip 10 op 8 ip -10 op 8 ip 7 op 1 ip 0 op 0

int SumFactor(int iNo1)
{
	int iCnt=0;
	int iSum=0;//ith iSum madhe addition store honar ahe
	if(iNo1<0)//ith jr user ne negative input dil tr ha tyala positive krel aani tya positive no chya factor chi addition hoil for loop madhe
	{
		iNo1=-iNo1;
	}
	for(iCnt=1;iCnt<iNo1;iCnt++)//ha loop ip chya ardhya nantr rikama firtoy mhnje ip 12 asel tr to 6 nantr empty firtoy aapn he iteration kami kru shkto yala timecomplexcity kami krne as mhntat
	{
		if((iNo1%iCnt)==0)
		{
			iSum=iSum+iCnt;//ith aapn iSum aadhi 0 hota mg iCnt madhe ji value yeil tyachyashi iSum addition krun ti addition iSum madhe stor hoil
		}
	}
	return iSum;//he return by value mhnje iSum nahi janar tr tyachyatli value main chya iRet madhe janar

}
int SumFactorX(int iNo1)//he updated function ahe varchya function ch karn ith aapn time complexcity kami keli ahe
{
	int iCnt=0;
	int iSum=0;
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	for(iCnt=1;iCnt<=(iNo1/2);iCnt++)//ith fkt iCnt<iNo1/2 yedhach change zala baki sgla code same ahe fkt yachyamule yachi timecomplexcity kami zali ya for loop madhe aapn mdhli condi iCnt<=iNo1/2 ashi ghetliye karn ha input chya ardhach firel mhnje ip 10 aseltr to 5 veles firel aani fkt vrchya function madhlya loop sarkh jr iCnt<iNo1/2 jr ghetl ast tr to ip chya ardhyachya ek ghar mage pryant firla asta mhnje ip jr 10 asel tr fkt 4 velesch firla asta aata ith input 10 ahe mhnun aapn tyacha ardha 5 gheu n/2 mhnje 10/2 as pn jr input 11 aal trihi tyacha ardha ha 5 ch asnar karn te intigral ahe jyach ans point madhe aal tyach te point chya aadhich consider krtat mhnje 11/2 yach ans 5.5 as yet pn he 5 ch consider krtat. tsch jr 33 ahe tyach te 16 ch ghetil.
	{
		if((iNo1%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}//time complexcity is O(n/2)
int main()
{
	int iValue;
	int iRet,iRet1;
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=SumFactor(iValue);//he call by value ahe ith parameter value ahe mhnun nahi tr aapn function la iValue madhli value detoy mhnun he call by value ahe 
	iRet1=SumFactorX(iValue);
	printf("%d is the Addition of Factor %d\n",iRet,iValue);
	printf("%d is the Addition of Factor %d",iRet1,iValue);
	return 0;


}

//aapn jr ya program la input 12 dil tr to 11 veles firtoy 12 vels nahi firnar karn aapn fkt iCnt<iNo1 mhtly mhnun mg to 11 veles firtoy pn to 6 nantr empty firtoy karn kuthlyahi no che factor he tyachya ardhyapryantch nightata mhnje 12 no asel tr tyacha secondlast factor ha 6 asnar aani last factor 12 asnar pn aapn ya program madhe 12 ghet nahiye mg aapla loop 6 nantr empty firtoy ya iteration la kami krn mhnje code optimize krn yala timecomplexcity as mhntat
//ya program chi time complexcity O(n) ahe aata aaplyala ti O(n/2) kraychi ahe mhnje aaplya program madhla loop ha ardhach firel 
//tr ith aapn SumFactor he function lihily tyachi timecomplexcity O(n)ahe tr aaplya ya function la modified kraychya karn tyachi timecomplexcity hi O(n/2)aali pahije mhnun mla asch ek function lihaychy pn mi ekach navache 2 function nahi lihu shakt karn compiler error denar redefination mhnun tr compnies madhe asa rule asto ki jr ekach navache 2 function nahi chalnar tr je aaplyala navin updated function lihaychy tyala as kahitri barik badl krtat mhnje junya function chya pude fkt X lihitat mhnje ith SumFsctor la jr update kraych zal tr tyach nav SumFactorX as yenar mhnje x pud lavla mhnje SumFactor he jun ahe aani SumFactorX he navin mhnje updated ahe mg he 2 function tsech program madhe rahnar jyala je pahije tyala te milnar aata jr in future vatl ki ajun bdal kraycha ahe tr prt X lawawa SumFactorXX as.
//mg aata tya navin function la call krava lagnar navin function pn output tech denar je jun function det hot te pn ya navin function chi timecomplexcitty kami honar ahe mhnun anani kami velat output denar ahe.
