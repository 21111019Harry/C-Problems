#include<stdio.h>

void rev(char arr, int no);
int main()
{
	char ch = '\0';
	int no = 0;
	printf("Enter the Char:-");
	scanf("%c",&ch);

	printf("Enter the no:-");
	scanf("%d",&no);

	rev(ch,no);
}
void rev(char arr, int no)
{
	static int i = 1;
	if(i<=no)
	{
		printf("%c\t",arr);
		i++;
		arr++;
		rev(arr,no);
	}
}
