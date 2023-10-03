#include<stdio.h>
void Pattern(int iValue,int iValue1)
{
	int i=0,j=0;
	for(i=1;i<=iValue;i++)
	{
		if((i%2)==0)
		{
			for(j=1;j<=iValue1;j++)
			{
				printf(" %d ",j);
			}
		}
		else
		{
			for(j=iValue1;j>=1;j--)
			{
				printf(" %d ",j);
			}
		}
		printf("\n");
	}

}
int main()
{
	int iNo=0,iNo1=0;
	printf("Enter the No:");
	scanf("%d\n%d",&iNo,&iNo1);
	Pattern(iNo,iNo1);
	return 0;
}
