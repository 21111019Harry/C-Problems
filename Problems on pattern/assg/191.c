#include<stdio.h>

//irow=4 icol=4 o/p *		1,1 1,2 1,3 1,4
//		    * *		2,1 2,2 2,3 2,4
//		    * * *	3,1 3,2 3,3 3,4
//		    * * * *	4,1 4,2 4,3 4,4



void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
		//iht ha loop pn chalel pn ya loop mule ya prigram ch exicution time vadhel karn ha loop sglya condi check krtoy jya aaplyala lagnar nahit tya pn 
		//	if((i==j) || (i>j))
			if(i>=j)
			{
				printf("*\t");
			}
		}
		printf("\n");

	}
}
void PatternX(int iRow,int iCol)//ha loop updated ahe karn loop exicution time kami krto vrchya loop peksha
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		//ith aapn program cha exicution time kami kela ahe karn vrchya loop madhe program ha purn 16 veles firt hota pn ith 10 velesch firtoy karn aapn ith for loop madhe j<=i hi 
		//condi ghetilye yachyane aapn direct i chi value jitki tevdhya veles j cha loop firel as kely karn o/p madhe 1st row madhe j ha ekdach firtoy aani tith i chi value pn ekch
		//ahe aani 2nd row madhe j 2 dach firtoy aani tih i chi value pn 2 ch ahe as same 4th row pryant.optimization sglikade hou shkt nahi jith o/p peksha kami itteration ahe tith
		//optimization hou shkt tsch ith o/p mhnje itteration 16 vels hot pn o/p print 10 ch veles kraych hot. 
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
	////////////////////////
	printf("Enter the no:");
	scanf("%d",&i);
	printf("Enetr the no:");
	scanf("%d",&j);
	Pattern(i,j);
	////////////////////////
	int x=0,y=0;
	printf("Enter the no:");
	scanf("%d",&x);
	printf("Enter the no:");
	scanf("%d",&y);
	PatternX(x,y);
	return 0;
}
