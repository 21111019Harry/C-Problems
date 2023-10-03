#include<stdio.h>
#include<malloc.h>


int Digit(int iNo,int arr[]);
int main()
{
	int iSize = 0, iRet = 0, iCnt = 0;
	int *p = NULL;

	printf("Enter the NO:");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate Memory:");
		return -1;
	}

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the Element%d:-",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Digit(iSize,p);

//	printf("%d",iRet);

	free(p);

	return 0;
}
int Digit(int iNo,int arr[])
{
	int iCnt = 0, iSum = 0, iDigit = 0;
	int iTemp = 0, iRev = 0;

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		while(arr[iCnt]!=0)
		{
		/*	if(iTemp==0)
			{
				arr[iCnt]=iTemp;
			}*/
			iDigit=arr[iCnt]%10;
			iRev=(iRev*10)+iDigit;
			iSum++;
			arr[iCnt]=arr[iCnt]/10;
		}
		if(iSum==3 || 2 || 1) 
		{
			printf("%d\t",iRev);
		}
		iRev=0;
		iSum=0;
	
/*	if(iSum==3)
	{
		printf("%d",iSum);
	}
	}*/
	}
}
