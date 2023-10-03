#include<stdio.h>


void rev(char *src);
void revR(char *src);
int main()
{
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	rev(arr);

	printf("%s\n",arr);

	revR(arr);

	printf("%s",arr);

	return 0;
}
void rev(char *src)
{
	char Temp = '\0';
	char *p = src;
	char *q = src;
	while(*q!='\0')
	{
		*q++;
	}
	*q--;
	while(q>p)
	{
		Temp = *p;
		*p = *q;
		*q = Temp;
		*p++;
		*q--;
	}
}
void revR(char *src)
{
	char *p = src;
	char *q = src;
	char Temp = '\0';
	if(*q!='\0')
	{
		*q++;
	}
	*q--;
	if(q>p)
	{
		Temp = *p;
		*p = *q;
		*q = Temp;
		p++;
		q--;
		revR(src);
	}
}

