#include<stdio.h>
#include<stdbool.h>


//accept 2 no from user and display the position of all such bits which are comman and on(1) int both the no.
//eg iNo1 = 1011 0110 182
//   iNo2 = 0011 1100 60
//   o/p 3 5 6 this is position.

typedef unsigned int UINT;
void CheckBit(UINT iNo1, UINT iNo2);
int main()
{
	UINT iValue1 = 0, iValue2 = 0;

	printf("Enter the First NO:-");
	scanf("%d",&iValue1);

	printf("Enter the Second NO:-");
	scanf("%d",&iValue2);

	CheckBit(iValue1,iValue2);

	return 0;
}
void CheckBit(UINT iNo1, UINT iNo2)
{
	UINT iRes = 0, iMask = 1;
	int iNo = 0, iCnt = 1;

	iNo = iNo1 & iNo2;	

	while(iNo>0)
	{
		iRes = iNo & iMask; 
		if(iRes==1)
		{
			printf("%d\n",iCnt);
		}
		iCnt++;
		iNo = iNo>>1;
	}

}
