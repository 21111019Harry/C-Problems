#include<stdio.h>

///////////////////////////
//Name:Display
//input:none
//output:int
//Discription:Print *
//other:Harshal
//Date:
///////////////////////////
void Display(int iNo2)
{
	if(iNo2<0)//ith filter pn ast je check krt ki 0 chya khalchya value mhnje negative value aalya tr tyala bahir kadaych pn aapn ith updater ghetl ahe te negative value la poisitive value krun print krt 
	{
		iNo2=-iNo2;
	}
	int iCnt=0;//
/*	while(iCnt>iNo2)//ith aapn <= ghetl nahiye karn iCnt ha 0 ahe for loop madhe aadhich iCnt ha 1 kela ahe 
	{
		printf("*\n");//ith while(iNo2>0)hi pn condi chalel yachyane iCnt variable ghyachi garj nahiye mhnje 4 byte local variable iCnt che vachtat
		iCnt++;//aani ith fkt iNo2-- krav lagel
	}*///ha program aaplyala while loop ne pn solve krta yeil
	for(iCnt=1;iCnt<=iNo2;iCnt++)//ith aapn iNo2 madhe user kdun value ghetoy mhnje titkya veles aaplyala * print kraycha ahe 
	{
		printf("**\n");//for loop ha kdhihi 1 pasun start kraycha aani fkt array asla trch for loop 0 pasun start kraycha karn array 0 index pasun chalu hoto

	}
}


////////////////////////
//Entry point function
///////////////////////
int main()
{
	int iNo1=0;
	printf("Enter the number:");
	scanf("%d",&iNo1);
	Display(iNo1);
	return 0;
}
