#include<stdio.h>

////////////////////
//Name:Display
//Input:int,char
//Output:None
//Discription:Print
//Other:Harshal
//Date:
////////////////////
void Display(int iNo,char ch)
{
	if(iNo<0)
	{
		iNo=-iNo;
		
	}
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c\n",ch);
	}
}

//////////////////////////
//Entry point function
/////////////////////////
int main()
{
	char cValue=0;
	int iValue=0;
	printf("Enter the Char:");
	scanf("%c",&cValue);
	printf("Enter the no:");
	scanf("%d",&iValue);
	Display(iValue,cValue);//ith value pathvtana function chya sequence madhe value pathvaychya 
	return 0;

}
