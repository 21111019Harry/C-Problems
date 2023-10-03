#include<stdio.h>


//display factor revers order



int RevFactor(int iNo)//ya loop chi time complextiy O(N/2) ahe aani yaat best,worst,average case yet nahi 
{
	int iCnt=0;
	if(iNo<0)//he updater ahe he negative i/p la positive krun pudh pathvt 
	{
		iNo=-iNo;
	}
	for(iCnt=iNo/2;iCnt>=1;iCnt--)//ha loop reverce firnar ahe mhnje ip 12 asel tr 6,5,4,3,2,1 asa aani tyache factor print krnar 
	{
		if((iNo%iCnt)==0)//he condi check krte ki factor ahe ki nahi
		{
			printf("%d\n",iCnt);
		}

	}
}
int main()
{
	int iValue;
	printf("Enter the no:");
	scanf("%d",&iValue);
	RevFactor(iValue);
	return 0;
}
