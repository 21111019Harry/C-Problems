#include<stdio.h>


//accept string from user and calculate length of that string.
//i/p "Hello" o/p 5 i/p "Hello world" o/p 10

int lengthI(char *src);
int lengthR(char *src);
int lengthRev(char *src,int iCnt);
int main()
{
	char arr[20];
	int iRet = 0, iRet1 = 0, iRet2 = 0;

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	iRet = lengthI(arr);

	printf("%d\n",iRet);

	iRet1 = lengthR(arr);

	printf("%d\n",iRet1);

	iRet2 = lengthRev(arr,0);

	printf("%d",iRet2);

	return 0;
}
int lengthI(char *src)
{
	int iCnt = 0;
	while(*src!='\0')
	{
		if((*src>='A') && (*src<='Z') || (*src>='a') && (*src<='z'))
		{
			iCnt++;
		}
		*src++;
	}
	return iCnt;
}
int lengthR(char *src)
{
	static int iCnt = 0;//ith aapn ha static ghetla bcz aapn jevha jevha function la call kru tevha ha variable badlnar nahi mhnje to jr 5 asel aani aapn prt ya function la call kelyavr aaplyala to 5 deil.
	if(*src!='\0')
	{
		if((*src>='A') && (*src<='Z') || (*src>='a') && (*src<='z'))
		{
			iCnt++;
		}
		*src++;
		lengthR(src);
	}
	return iCnt;
}
int lengthRev(char *src, int iCnt)
{
	if(*src=='\0')
	{
		return iCnt;
	}
	if(*src!=' ')
	{
		iCnt++;
	}
	*src++;
	lengthRev(src++,iCnt);
}
