#include<stdio.h>
#include<malloc.h>


int main()
{
	int iRet = 0;
	char arr[20];
	char brr[20];

	printf("Enter the First String:-");
	scanf("%[^'\n']s",arr);

	printf("Enter the Second String:-");
	scanf(" %[^'\n']s",brr);

	iRet = Check(arr,brr);

	return 0;
}
int Check(char *src, char *dest)
{
	while(*src!='\0')
	{
		iCnt++;
	}
	for(i=0;i<iCnt;i++)
	{
		[*src[i]-'a']=1;

	}
}
