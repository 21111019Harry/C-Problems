#include<stdio.h>

int countI(char *src);
int countR(char *src, int iCnt);
int main()
{
	char arr[20];
	int iRet = 0, i = 0, iRet1 = 0;

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	iRet = countI(arr);

	printf("%d\n",iRet);

	iRet1 = countR(arr,i);

	printf("%d",iRet1);

	return 0;
}
int countI(char *src)
{
	int iCnt = 0;
	while(*src!='\0')
	{
		if((*src>='a') && (*src<='z'))
		{
			iCnt++;
		}
		*src++;
	}
	return iCnt;
}
int countR(char *src, int iCnt)
{
	if(*src=='\0')
	{
		return iCnt;
	}
	if((*src>='a') && (*src<='z'))
	{
		iCnt++;
	}
	return countR(++src,iCnt);
}
