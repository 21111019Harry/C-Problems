#include<stdio.h>

//accept row no and col no from user and display below pattern
// irow=4 icol=4 o/p * 		1,1 1,2 1,3 1,4		* - - -	   asha pattern la aadhi		* * * *  ya pattern la aaplya if madhe * chi condi handle kravi lagel aanielse madhe 
// 		     * *	2,1 2,2 2,3 2,4		* * - -    purn squre kadhun ghyacha		- * * *  tya dash mhnje blank space chya condi handel kravi lagel
// 		     * * *	3,1 3,2 3,3 3,4		* * * -    mhnje je point print nahi		- - * *
// 		     * * * *	4,1 4,2 4,3 4,4		* * * *	   krayche tyana - lihaych		- - - *
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	if(iRow!=iCol)
	{
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
		//ith else nahi yenar karn upper trangle aaplyala print nahi kraycha ahe ith fkt aaplyala digonal aani lower trangle print kraycha ahe else kadhe lihaychi garj yeil jevha aaplyala space print krava lagel mhnje jr hech o/p opposite side la print kraych asl tevha tyala handel kraysathi aadhicha blank space handel krava lagto tevha else yeil
			if(i>=j)//ith aapn (i==j) || (i>j) as pn lihu shkto pn he jevha digonal point velgle print krayche astil tevha he as krav lagel pn ith digonal aani lower trangle he same print krayche ahet mhnun (i>=j) as ghetly
			{
				printf("*\t");
			}
		}
		printf("\n");
	}

}
void PatternX(int iRow,int iCol)//he updated fun ahe karn he vrchya fun peksha kami vela firty he optimize fun ahe
{
	//yachya aadhichya sglya program madhe optimization hou shkt nahi te fkt yach program madhe hou shkt karn aadhichya sglya program madhe aaplyala sglya thikan kahinakahi o/p print
	//kraych hot mhnun tith purn loop firav garjech hot pn ith aaplyala ardh firun pn o/p print krta yeil karn ith ardha vel loop rekama firel mhnu ith optimixation hou shkt 
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		//ith aapn j<=i krtoy karn aaplyala jith * print kraycha ahe te j==i || j<i mhnje i,j same or i he j peksha lahan ahet tith * rint kraycha ahe ith aapn direct ti condi loop madhech dile tyamule ha loop fkt 1,1 2,2 3,3 4,4 2,1 3,1 4,1 3,2 4,2 4,3 ithch firel baki rikama firnar nahi madchya fun cha loop ha 1,1 1,2 1,3 1,4 2,1 2,2 2,3 2,4 --- as 4,4 pryant firt hota mhnje sgle firt hota pn ha loop jevdh lagty tevdhach firtoy mhnun ha optimize loop ahe 
		for(j=1;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
int main()
{
	int i=0,j=0;
	//////////////////////////////
	printf("Enter the no:");
	scanf("%d",&i);
	printf("Enter the no:");
	scanf("%d",&j);
	Pattern(i,j);
	////////////////////////////////
	int x=0,y=0;
	printf("Enter the no:");
	scanf("%d",&x);
	printf("Enter the no:");
	scanf("%d",&y);
	PatternX(x,y);
	return 0;
}
