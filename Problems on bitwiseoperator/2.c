#include<stdio.h>
#include<stdbool.h>


//accept no from user and checkweather this no 4th bit is on or off.
//i/p 41 o/p true, i/p 19  o/p false

typedef unsigned int UINT;
bool CheckBit(UINT iNo);

int main()
{
	UINT iValue = 0;
	bool bRet = 0;

	printf("Enter the No:-");
	scanf("%d",&iValue);

	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf("Bit is ON");
	}
	else
	{
		printf("Bit is OFF");
	}

	return 0; 
}
bool CheckBit(UINT iNo)
{
	UINT iRes = 0, iMask = 0;
	iMask = 0x00000008;

	iRes =  iNo & iMask;

	if(iRes==iMask)//if (iRet!=0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*
  0000 0000 0000 0000 0000 0000 0010 1000
    0    0    0    0    0    0    0   8   

*/
