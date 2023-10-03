#include<stdio.h>


void Pattern(char *src);
int main()
{
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Pattern(arr);

	return 0;
}
void Pattern(char *src)
{
	int iCnt = 0, i = 0, j = 0;
	int iRow = 0, iCol = 0;
	while(*src!='\0')
	{
		iCnt++;
		*src++;
	}
	iRow = iCnt;
	iCol = iCnt;

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%s\t",*src);
			if(*src!='\0')
			{
				*src++;
			}
		}
		printf("\n");
	}
}
