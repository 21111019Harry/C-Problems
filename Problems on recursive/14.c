#include<stdio.h>

//accept string from user and display the content of that string in reverse order.

void Display(char *src);
void DisplayR(char *src);
void DisplayREV(char *src);
int main()
{
	char arr[20];

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Display(arr);

	DisplayR(arr);

	printf("\n");

	DisplayREV(arr);

	return 0;
}
void Display(char *src)
{
	char *End = src;
	char *Start = src;
	while(*End!='\0')
	{
		*End++;
	}
	*End--;
	while(End>=Start)
	{
		printf("%c",*End);
		*End--;
	}
	printf("\n");
}
void DisplayR(char *src)//ith aapn string fkt ulti print keli ahe vim 8.c madhe aapn string reverse krun print keli ahe mhnje temp use krun tr ith aapn adhi string chya shevti gelo aani shevtun print krt krt aalo yaat fkt aapn *End-- aahdi ghetla mg nantr printfcha call aani nantr function la call as.
{
	if(*src!='\0')
	{
	//	printf("%c",*src);
		DisplayR(src+1);
		printf("%c",*src);//he printf jr function chya call chya khali lihil tr te backtracking krt print
		//hot aani jr te printf aapn function call chya aadhi lihil tr te srl print hot.
	}
}
void DisplayREV(char *src)
{
	if(*src=='\0')
	{
		return ;
	}
	DisplayREV(src+1);
	printf("%c",*src);
}
