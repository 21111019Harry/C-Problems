#include<stdio.h>

int countR(char *src, int length);
int countRX(char *src);
int main()
{
	char arr[20];
	int iRet = 0, iRet1 = 0, no = 0;

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	iRet = countR(arr,no);

	printf("%d\n",iRet);

	iRet1 = countRX(arr);

	printf("%d",iRet1);
	return 0;
}
int countR(char *src, int length)
{
	if(*src=='\0')
	{
		return length;
	}
	countR(++src,++length);
}
int countRX(char *src)
{
	static int iCnt = 0;
	if(*src!='\0')
	{
		iCnt++;
		*src++;
		countRX(src);
	}
	return iCnt;
}
