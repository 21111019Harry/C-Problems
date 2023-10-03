#include<stdio.h>



//accept row no and col no from user and display below pattern
// iRow=4 iCol=4 o/p	A B C D
// 			a b c d
// 			A B C D
// 			a b c d
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';
	for(i=1;i<=iRow;i++)
	{
		if((i%2)==0)
		{
			for(j=1,ch='a';j<=iCol;j++)
			{
				printf("%c\t",ch);
				ch++;
			}
		}
		else
		{
			for(j=1,ch='A';j<=iCol;j++)
			{
				printf("%c\t",ch);
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
