#include<stdio.h>

//accept row no and col no from user and display below pattern 
// irow=5 icol=5 o/p	* 1 1 1 1	1,1 1,2 1,3 1,4 1,5 
// 			0 * 1 1 1	2,1 2,2 2,3 2,4 2,5
// 			0 0 * 1 1	3,1 3,2 3,3 3,4 3,5
// 			0 0 0 * 1	4,1 4,2 4,3 4,4 4,5
// 			0 0 0 0 *	5,1 5,2 5,3 5,4 5,5
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
			//ith jevha aaplyala if lhihaychi vel yete tevha konti condi aadhi lihaychi te ks thrvaych tr jya if madhe aaplyala jast vela jav lagnar ahe ti if chi condi sglyat aadhi lihaychi nantr mg tyachyapeksha kami kontya cndi madhe jav lagnar ahe ti condi lihaychi as kelyane program cha exicution time kami hoto aaplyala sglya if chya condi tr lihavyach lagnar ahet pn jr ji jast vela exicute hotey ti condi aadhi lihili tr program cha exicution time kami hoto 
			if(i>j)
			{
				printf("0\t");
				
			}
			else if(i==j)
			{
				printf("*\t");
			}
			else
			{
				printf("1\t");
			}
		}
		printf("\n");

	}
}
int main()
{
	int i=0,j=0;
	printf("Enter the no:");
	scanf("%d",&i);
	printf("Enter the no:");
	scanf("%d",&j);
	Pattern(i,j);
	return 0;
}
