#include<stdio.h>


//accept row no and column no from user and display below pattren
// iRow=4 iCol=4  o/p A B C D	1,1 1,2 1,3 1,4 
// 		      1 2 3 4	2,1 2,2 2,3 2,4
// 		      A B C D 	3,1 3,2 3,3 3,4
// 		      1 2 3 4	4,1 4,2 4,3 4,4
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';//\0 he char chi default value ahe jshi integer chi aapn 0 deto tshi char chi \0 detat
	for(i=1;i<=iRow;i++)
	{
		if((i%2)==0)
		{
			for(j=1;j<=iCol;j++)
			{
				printf("%d\t",j);
			}
		}
		else
		{
			for(j=1,ch='A';j<=iCol;j++)
			{
				printf("%c\t",ch);//ith jr %d ghetl ki direct A,B,C,D chya assci value display hotil A,B,C,D pryant ka tr aapn loop 4 vela firtoy mhnun aani tyanchya assci value 65,66,67,68 asha display hotil karn A chi assci value he 65 ahe mhnun aani B,C,D as pudh ka tr aapn ch++ kely mhnun
				ch++;
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
