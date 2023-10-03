#include<stdio.h>
#include<stdbool.h>


//accept no. from user and 1 position from user and check weather the bit at that position is on or off.
//i/p 10 ipos 3 o/p false i/p 15 ipos 4 o/p true
typedef unsigned int UINT;
bool CheckBit(UINT iNo, int iPos);
int main()
{
	UINT iValue = 0, iRet = 0, iValue1 = 0;

	printf("Enter the NO:");
	scanf("%d",&iValue);

	printf("Enter position you want check:");
	scanf("%d",&iValue1);
	
	iRet = CheckBit(iValue,iValue1);
	
	if(iRet==0)
	{
		printf("False:");
	}
	else if(iRet==1)
	{
		printf("True:");
	}
	else
	{
		printf("Invalid Input:");
	}
	return 0;
}
bool CheckBit(UINT iNo, int iPos)//ith aapn dynamic position accept keli ahe user sagngel tya position vr operation krayche.
{
	UINT iRes = 0, iMask = 0x00000001;
	if((iPos<0) || (iPos>32))
	{
		return false;
	}

	iMask = iMask<<(iPos-1);

	iRes = iNo & iMask; 

	if(iRes==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}

}


/* 0000 0000 0000 0000 0000 0001 1000 0000     384 8th bit and 9th bit true hai means 1 hai.
     0   0    0     0    0    0    0    0
     

 */
