#include<stdio.h>

//accept no from user and check weither that no contain 5 init or not
//i/p 3321 o/p false i/p 5392 o/p true i/p 1249752 o/p true

#define True 1
#define False 0
typedef int bool;
bool Check(int iNo)//he function user kdun i/p ghet aani tya i/p madhe 5 digit ahe ki nahi te sangt
{
	int iDigit=0; 
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==5)
		{
			break;
		}
		iNo=iNo/10;
	}
	if(iDigit==5)
	{
		return True;
	}
	else
	{
		return False;
	}

}
bool CheckX(int iNo1,int iNo2)//he function user kdunch i/p ghet aani userlach vichart ki tula konti value check kraychi ahe te
{
	int iDigit=0;
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	while(iNo1!=0)
	{
		iDigit=iNo1%10;
		if(iDigit==iNo2)
		{
			break;
		}
		iNo1=iNo1/10;
	}
	if(iDigit==iNo2)
	{
		return True;
	}
	else
	{	
		return False;
	}

}
int main()
{
	int iValue=0,iRet=0;
	int iValue1=0,iValue2=0,iRet1=0;
	////////////////////////////////////
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=Check(iValue);
	if(iRet==1)
	{
		printf("True\n");
	}
	else
	{	
		printf("False\n");
	}
	/////////////////////////////////////
	printf("Enter the no:");
	scanf("%d %d",&iValue1,&iValue2);
	iRet1=CheckX(iValue1,iValue2);
	if(iRet1==1)
	{
		printf("True");
	}
	else
	{	
		printf("False");
	}
	return 0;

}
