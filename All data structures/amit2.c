#include<stdio.h>
#include<malloc.h>

int Check(char *src, char *desr);
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

	if(iRet==1)
	{
		printf("True:");
	}
	else
	{
		printf("False:");
	}
	return 0;
}
int Check(char *src, char *dest)
{
	int arr[26]={0};
	int iCnt = 0;

	while(*src!='\0')
	{
		arr[*src-'a']++;
		src++;
	}
	while(*dest!='\0')
	{
		arr[*dest-'a']--;
		dest++;
	}
	for(iCnt=0;iCnt<26;iCnt++)
	{
		if(arr[iCnt]!=0)
		{
			return -1;
		}
	}
	return 1;
}
