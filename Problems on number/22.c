#include<stdio.h>

//accept no from user and check weither that no is prime no or not

#define True 1
#define False 0
typedef int bool;
/*bool PrimeFactor(int iNo)//he function flag use krun o/p det
{
	int iCnt=0;
	bool flag=True;//ha flag vr ahe mhnje 1 ahe
	if((iNo==1) || (iNo==-1) || (iNo==0))
	{
		return False;
	}
	if(iNo<0)
	{
		iNo=-iNo;
	} 
	for(iCnt=iNo/2;iCnt>1;iCnt--)//yachi time complexcity O (N/2) ahe
	{
		if((iNo%iCnt)==0)//ha loop tevach lihaycha jehva for loop madhli && nantrchi condi nsel tevha karn ti second condi mhnjech hi if chi condi
		{
			flag=False;//ith to flage ha khali zala mhnje 0 zala
			break;
		}
	}
	return flag;

}*/

bool PrimeFactorX(int iNo)//he updated function ahe he without using flag o/p det
{
	int iCnt=0;

	if((iNo==1) || (iNo==-1) || (iNo==0))
	{
		return False;
	}
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=iNo/2;iCnt>1;iCnt--)//yachi time complexcity O(N/2) ahe
	{
		if((iNo%iCnt)==0)
		{
			break;
		}
	}
	if(iCnt==1)
	{
		return True;
	}
	else
	{
		return False;
	}

}

/*bool PrimeFactorXX(int iNo)//he function ajun updated ahe without using flag and break keyword ahe 
{
	int iCnt=0;
	if(iNo<0)//ith aapn updater vr ghetlay karn iNo==-1 he condi yat cover houn jate karn 1 ha prime no nahiye mhnun 1 la aapn separate handel kely
	{
		iNo=-iNo;
	}
	if((iNo==1) || (iNo==0))//he XX function readble nahiye ha standard way nahiye program lihaycha vrche 2 function he standard ahe readble ahet
	{
		return False;
	}
	for(iCnt=iNo/2;((iCnt>1) && (iNo%iCnt)!=0);iCnt--)//yachi time complexcity N/2 peksha kami ahe pn kiti kami ahe te nahi sangu shkt ha infinite loop nahiye karn ha thambtoy infinite loop mhnje n thambnar ha without body loop ahe
	{

	}
	if(iCnt==1)
	{
		return True;
	}
	else
	{
		return False;
	}
}*/
int main()
{
	int iValue=0;
	bool iRet=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
//	iRet=PrimeFactor(iValue);
	iRet=PrimeFactorX(iValue);
//	iRet=PrimeFactorXX(iValue);
	if(iRet==True)
	{
		printf("%d is prime no",iValue);
	}
	else
	{
		printf("%d is not prime no",iValue);
	}
	return 0;
}



//ith aapn ha question 3 type ne solve kru shkto mhnun 3 function ghetle ahe 1st flag use krun he function run krt astana baki 2 function ani tyanche main madhle call pn band krayche
//mg tsch 2nd function without flage use krun kely he function run hot astana pn same kraych baki 2 function aani tyanche call band krayche mg tsch 3rd type ha time complexcity kami krun 
//aani break n vaprta aapn solve kru shkto








