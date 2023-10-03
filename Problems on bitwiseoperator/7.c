#include<stdio.h>
#include<stdbool.h>

//accept no from user and toggle 13 bit of that no. and return that modified no.
//yaha modified no return krna hai isliye function ki return value UINT hai.means unsigned int.

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo);
int main()
{
	UINT iValue = 0, iRet = 0;

	printf("Enter the NO:");
	scanf("%d",&iValue);

	iRet = ToggleBit(iValue);

	printf("Toggle no is:-%d",iRet);

	return 0;
}
UINT ToggleBit(UINT iNo)
{
	UINT iRes = 0, iMask = 0x00001000;

	iRes = iNo ^ iMask;

	return iRes;

//	return iNo ^ 0x00001000;
}



/*0000 0000 0000 0000 0000 0000 0000 0000
    0   0    0    0     1   0     0   0  
  0000 0000 0000 0000 0000 0010 0000 0000 =512 ka 13 bit toggle kiya to  i/p 512 o/p 4608
  0000 0000 0000 0000 0001 0010 0000 0000 = 4608
 */
  
