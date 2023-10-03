#include<stdio.h>

//even no factor addition
int Addition(int iNo)
{
	int iSum=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		
		
			if((iNo%iCnt)==0)
			{
				if((iCnt%2)==0)
				{
					iSum=iSum+iCnt;
				}
			}
		

		
		 
	}
	return iSum;

}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the no:\n");
	scanf("%d",&iValue);
	iRet=Addition(iValue);
	printf("The Addition is %d\n",iRet);
	return 0;

}

