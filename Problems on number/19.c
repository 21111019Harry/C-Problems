#include<stdio.h>




//accept no from user and display the even factor of that no.
void EvenFactor(int iNo)
{
	int iSum=0,iCnt=0;
	if(iNo==1)
	{
		printf("No even Factor:");
	}
	for(iCnt=(iNo/2);iCnt>=1;iCnt--)//ha loop ulta firnar jr i/p 16 asel tr 8,7,6,5,4,3,2,1 8 pasun ka tr aapn i/p N/2 ghetly mhnun mhnje i/p chya half pasun mage
	{
        if((iCnt%2)==0)
        {
    		if((iNo%iCnt)==0)
	    	{
                printf("%d\n",iCnt);
			}
        }
    }
/*	for(iCnt=1;iCnt<=(iNo/2);iCnt++)//ha loop srl firnar jr i/p 16 asel tr 1,2,3,4,5,6,7,8 8 pryantch ka tr aapn N/2 ghetly mhnun mhnje i/p chya half pryantch 
	{
		if((iNo%iCnt)==0)//ith aapn check ktoy ki factor ahe ki nahi 
		{
			if((iCnt%2)==0)//ith check krtoy ki even ahe ki nahi
			{
				printf("%d\n",iCnt);
			}
		}
	}*/
	

}
/*int OddFactor(int iNo)
{
	int iSum=0,iCnt=0;
	if(iNo==1)
	{
		return 1;
	}
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=(iNo/2);iCnt>=1;iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			if((iCnt%2)!=0)
			{
				printf("%d\n",iCnt);
			}
		}
	}
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			if((iCnt%2)!=0)
			{
				printf("%d\n",iCnt);
			}
		}
	}
}*/



int main()
{
	int iValue=0,iRet=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	EvenFactor(iValue);
//	iRet=OddFactor(iValue);
	if(iRet==1)
	{
		printf("%d\n",iValue);
	}
	return 0;
	
}

//ya program madhe aapn eka value che even,odd factor display kele ahet pn eka veles ekch function call hou shkt mnhnu aapn dusr function comment kel ahe 





