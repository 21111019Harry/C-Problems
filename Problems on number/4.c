#include<stdio.h>

////////////////////////////
//name:Display
//input:none
//output:none
//discription:print
//other:Harshal
//date:
////////////////////////////
/*void Display()
{
	int iCnt=0;
//	iCnt=5;//he while loop active astana lihaych
	//while(iCnt>0)//ith while loop pn yeu shkto
	for(iCnt=10;iCnt>0;iCnt--)//ith aapn i>=1,i!=0 hya 2 condi pn lhihu shkto
	{
		printf("%d\n",iCnt);
		//--iCnt;//ith he while loop lavla teva use kraych
	}

}*/
int Display(int iValue)
{
	int iCnt=0;
	while(iCnt<=iValue)
	{
		printf("%d\n",iCnt);
		iCnt++;
	}

}
/////////////////////
//Entry point function
////////////////////
int main()
{
	int iNo=0;
	printf("Inside Main\n");
	scanf("%d",&iNo);
	Display(iNo);
	return 0;
}
