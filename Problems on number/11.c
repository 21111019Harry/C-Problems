#include<stdio.h>



#define True 1//he ith lihily karn aapn return True or False krtoy code readeble honyasathi pn true,false he charecter ahet pn tyachi return value bool ahe mhnun tyata #define krun 1,0 kely 
#define False 0//
typedef int bool;//int la tatpurta bool mhtly mhnje bool ha int sarkha behave krnar
bool Factor(int iNo1,int iNo2)//ith function chi return value bool ahe karn question madhe check weither not mhnun question madhe check weither not he aal ki direct bool use kraycha
{
	if((iNo1%iNo2)==0)
	{
		return True;
	}
	else
	{
		return False;
	}
}
////////////////////////
//Entry point function
///////////////////////
int main()
{
	int iValue1,iValue2,iRet;
	printf("Enter th no:\n");
	scanf("%d %d",&iValue1,&iValue2);
	iRet=Factor(iValue1,iValue2);
	if(iRet==True)
	{
		printf("%d is a factor of %d",iValue2,iValue1);
	}
	else
	{
		printf("%d is not factor of %d",iValue2,iValue1);
	}
	return 0;
}
