#include<stdio.h>


#define True 1
#define False 0
int Add(int iNo1,int iNo2)
{
	int iMult=0,iCnt=1;
	while(iCnt<=iNo2)
	{
		if(iMult==0)
		{
			iMult=1;
		}
		iMult=iMult*iNo1;
		iCnt++;
	}
	return iMult;


}

int main()
{
	int i=0,j=0,iRet=0;
	printf("Enter the no:");
	scanf("%d",&i);
	printf("Enter the no:");
	scanf("%d",&j);
	iRet=Add(i,j);
	printf("%d ",iRet);
	return 0;
}
