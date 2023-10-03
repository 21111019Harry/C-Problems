#include<stdio.h>

//////////////////////////////////////////////
//Name:Maximum
//input:int,int
//Output:int
//Discription:return largest
//Other:Harshal
//Date:3-9-2019
//////////////////////////////////////////////

int Maximum(int iNo1,int iNo2)
{

	if(iNo1>iNo2)
	{
		return iNo1;//ith ekach function madhe 1 return lhihav ts aapn pn 1 return lihila ahe karn te ektr if madhe jail or else madhe jail
		//printf("%d is he maximum no is:",iNo1);
	}
	else
	{
		return iNo2;
		//printf("%d is the largest no is",iNo2);
	}


}
////////////////////////////////////
//Entry point function
///////////////////////////////////
int main()
{	
	printf("-------ya program madhe aapn selection approch use kela ahe--------\n");
	int iValue1=0,iValue2=0;
	int iRet;
	printf("Enter the  no:\n");
	scanf("%d\n%d",&iValue1,&iValue2);//ith second %d chya \n jr takl tr to ajun ek valu gheto 
	int (*fptr) (int,int);//ith aapn function ptr vaprun function la call kela 
	fptr=Maximum;//ith aapn ptr madhe function chya address takla ith function chya pude & lavychi garj nahiye karn function chya navatch address asto 
	iRet=fptr(iValue1,iValue2);//mg ya ptrne value gheun tya function la dilya he call by value ahe
	printf("%d\n%d\n",&iValue1,&iValue2);
	printf("%d\n%d\n",iValue1,iValue2);
//	iRet= Maximum(&iValue1,&iValue2);//he function call by address ahe karn ith aapn iValue1,iValue2 yacha address detoy  
	printf("maximum no is %d\n",iRet);
	
	printf("He eg aapn 3 type ne solve kely 1st function ptr.2nd normal function call krun tyat parameter pass karun.3rd function call krun tyat tya value cha address pass krun tya value chya address madhun maximum print kela aani tya dogh value madhun maximum print kela mhnje *ptr mhtl ki to jyala point krtoy tyacha madhli value aani fkt ptr mhnje to jyala point krtoy tyacha address\n");
	return 0;

}
