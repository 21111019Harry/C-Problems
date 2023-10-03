#include<stdio.h>

void rev(char *src);
void revR(char *src);
int main()
{
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	rev(arr);

	revR(arr);
	return 0;
}
void rev(char src[])
{
	int i = 0, j = 0;
	while(src[i]!='\0')
	{
		if(src[i]==' ')
		{
			j = i-1;
			while(j>=0 && src[j]!=' ')
			{
				printf("%c",src[j]);
				j--;
			}
			printf(" ");
		}
		i++;
	}
	j = i-1;
	while(j>=0 && src[j]!=' ')
	{
		printf("%c",src[j]);
		j--;
	}
	printf("\n");
}
void revR(char *src)
{
	int i = 0, j = 0;
	if(src[i]!='\0')
	{
		if(src[i]==' ')
		{
			j = i-1;
			while(j>=0 && src[j]!=' ')
			{
				printf("%c",src[j]);
				j--;
			}
			printf(" ");
		}
		i++;
		rev(src);
	}
}
