#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//accept N no. from user and perform the addition that N no.

int Summation(int arr[],int);//ith int Summation(int *,int) as pn lihu shkto karn [] ha internally * ch hoto


//he callby value and callby address ahe karn aapn function la aadhi nav pathvl pn tya navt address pathvla aani nantr value pathvli mhnun te dogh ahe 
int main()
{
	int iSize=0,iRet=0,iCnt=0;
	int *p=NULL;

	printf("Enter the no of elements:");
	scanf("%d",&iSize);///////step 1//////////


	p=(int*)malloc(iSize*sizeof(int));//////////step 2//////////

	if(iSize==0)
	{
		printf("not accepted zero:");
		return 0;
	}
	if(p==NULL)//ith aapn (NULL==p) as pn lihu shkto
	{
		printf("Unable to allocate memory");
		return -1;//return as a failuar
	}


	printf("Enter elements:");
	for(iCnt=0;iCnt<iSize;iCnt++)/////////////step 3////////////
	{
		scanf("%d",&p[iCnt]);
	}
	iRet=Summation(p,iSize);//////step 4//////////////

	printf("Addition of no is %d",iRet);


	free(p);/////////////step 5////////////
	return 0;
}
 
int Summation(int arr[],int iLength)//arr[] he internally ptrch asto mhnje tikdun aaplyala address pathvlay aani to aapn arr nawachya ptr madhe ghetoy
     //	Summation(800,6)//he random no. ahet first address ahe and second value ahe 
{
	int iSum=0,iCnt=0;/////he function step 4 chach part ahe

	if((arr==NULL) || (iLength<=0))
	{
		return 0;
	}
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+arr[iCnt];
	}
	return iSum;
}
