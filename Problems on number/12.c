#include<stdio.h>


//accept no from user prints its factors ip 15 op 1 3 5 ip 23 op 1,10 1 2 5,-15 1 3 5
//////////////////////////
//Name:DisplayFactor
//Input:int
//Output:None
//Discription:Find Factor
//Other:Harshal
//Date:
//////////////////////////
void DisplayFactor(int iNo1)//yachi time complexity O(N) ahe karn ha n times firnar ahe aani ith best,worst,average case yet nahi karn ith break nahiye aani ith break pn nahi yenar karn ith tula n times purn firav lagnar aaplyala jr yachi time complextiy kami kraychi ahe tr te next eg madhe ahe vim 13.c  
{
	if(iNo1<0)//he aapn updater lavl ahe karn jr user ne negative value takli tr he tya value la positive krun titkya vela print krel
	{
		iNo1=-iNo1;
	}
	int iCnt=1;
	while(iCnt<iNo1)
//	for(iCnt=1;iCnt<iNo1;iCnt++)//ith for madhe if ghetlya karn user kdun no gheun tya no che factor kadhaychet mhnun
	{
		if((iNo1%iCnt)==0)//he if ith dilela no % 1 to dilela no mhnje 10%1,2,3,4,5...9 as check krt ahe 
		{
			printf(" %d ",iCnt);
		}
		iCnt++;
	}


}
///////////////////////////
//Entry point functon
//////////////////////////
int main()
{
	int iValue;
	printf("Enter the no:");
	scanf("%d",&iValue);
	DisplayFactor(iValue);
	return 0;
}
