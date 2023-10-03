#include<stdio.h>


////////////////////////
//Name:Display
//Input:int
//Output:none
//discription:print $
//Other:Harshal
//Date:
////////////////////////
void Display(int iNo2)
{
	
	if(iNo2<0)//ha updater ahe jevha user negative value deil tevha ha updater tya valuela positive krun print krel aani he updater function madhe sglyat vrti lihaych 
	{
		iNo2=-iNo2;
	}
	int iCnt=0;//he loop counter ahe loop madhlya value count krayla
/*	while(iCnt<iNo2)//ith aapn <=ghetl nahiye karn iCnt ha 0 ahe for loop madhe iCnt ha aadhich 1 kela ahe
	{
		printf("$\n");
		iCnt++;
	}*///he aapn while loop vaprun pn solve kru shkto
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		printf("$$\n");
	}
	
}

//////////////////////////
//Entry point function
//////////////////////////
int main()
{
	int iNo1=0;
	printf("Enter the no:");
	scanf("%d",&iNo1);
	Display(iNo1);
	return 0;

}
