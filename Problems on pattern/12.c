#include<stdio.h>

//accept row no. and column no. from user and display below pattern
//i/p irow=4 icol=4 o/p 1 2 3 4    1,1 1,2 1,3 1,4   
//			4 3 2 1	   2,1 2,2 2,3 2,4
//			1 2 3 4    3,1 3,2 3,3 3,4
//			4 3 2 1    4,1 4,2 4,3 4,4
void Pattern(int iRow,int iCol)//yachi time complexity O(N^2) ahe karn ha nested loop ahe aani bahircha loop 4 veles firtoy aani aatla loop 16 veles firtoy ektr if madhla or else madhla 16 veles firel
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)//ha optimize loop ahe karn ith aapn loop la fkt 4 velesch firvtoy aani check krtoy ki no. even asel tr reverse print krtoy aani no. odd asel tr srl print krtoy
	{
		if((i%2)!=0)
		{
			for(j=1;j<=iCol;j++)//ya loop madhe jr aapn if else lihil ast tr yacha exicution time vadhla asta pn aapn if else baerchya loop madhe lihil ahe tyamule ha optimize acode ahe mhnje if else aata fkt 4 veles firnar pn jr tech if else madhlya loop madhe aste tr te 16 veles firle aste aani tyancha exicution time vadhla asta
			{
				printf(" %d\t",j);
			}
		}
		else
		{
			for(j=iCol;j>=1;j--)
			{
				printf(" %d\t",j);
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter the row no:");
	scanf("%d",&iValue1);
	printf("Enter the col no:");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}
