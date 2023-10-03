#include<stdio.h>

int spaceR(char *src);
int main()
{
	char arr[20];
	int iRet = 0;
	int cnt=0;

	printf("Enter the Stding:-");
	scanf("%[^'\n']s",arr);

	iRet = spaceI(arr);

	printf("%d\n",iRet);

	return 0;
}
int spaceI(char *src)
{
	int iCnt = 0;
	while(*src!='\0')
	{
		if(*src==' ')
		{
			iCnt++;
		}
		*src++;
	}
	return iCnt;
}
int spaceR(char *src)
{
	if(*src=='\0')
	{
		return iCnt;
	}
	if(*rc==' ')
	{

	}
}
