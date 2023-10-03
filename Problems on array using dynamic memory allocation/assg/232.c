#include<stdio.h>
#include<stdlib.h>


//accept N no. from user and accept one another no. as No. and return index first occurrence of that no.
//i/p n=4,element=10,11,15,14 value=11.
//o/p =1 1mhnje index no. ahe 11 ha kiti index la ahe as.

int FirstOcc(int arr[], int, int);
int main()
{
	int iSize=0,iCnt=0,iValue=0,iRet=0;
	int *p=NULL;

	printf("Enter the no:");
	scanf("%d",&iSize);

	printf("Enter the no. you want:");
	scanf("%d",&iValue);

	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate memory:");
		return -1;
	}

	printf("Enter the Element:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet=FirstOcc(p,iSize,iValue);

	if(iRet==-1)//ith -1 indicate krto ki memorych nahiye
	{
		printf("Error:Memory failure");
	}
	else if(iRet==-2)//ith -2 indicate krto ki sizech nahiye mhnje user ne i/p 0 or negative dil tr te houch shkt nahi
	{
		printf("Error:Size Failure");
	}
	else if(iRet==-3)//ith -3 indicate krto ki purn array madhe user ne dilela i/p no. nahich ye 
	{
		printf("Error:their is no such element");
	}
	else//ith o/p positive yet iRet madhe
	{
		printf("Success:Element occurre at %d",iRet);
	}

	free(p);
	return 0;
}
int FirstOcc(int arr[],int iNo,int a)
{
	int iCnt=0;
	if((arr==NULL))
	{
		return -1; //yala error code mhntat mhnje error ch karn kay tr -1,-2,-3 as lihaych ast ith -1 arraych null asla tr mhnun program band pdla 
	}

	if(iNo<=0)
	{
		return -2; //-//- ith -2 ch karn jr user ne a madhe negative or zero value dile tr program band hoil
	}

	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		if(arr[iCnt]==a)
		{
			break; //ith break ahe karn jr element sapdla tr lgech loo chya baher ya 
		}
	}
	if(iCnt==iNo)//he condi check krtey ki jr aapn if madhe geloch nahi tr iCnt ani iNo madhe sarkhi value rahil 
	{
		return -3; -//-ith -3 ch karn mhnje purn array travel kela pn user la jo no. pahije to nahi milala
	}
	else
	{
		return iCnt;
	}
}


