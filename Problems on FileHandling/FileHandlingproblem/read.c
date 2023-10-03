#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


void Display(char brr[]);
int main()
{
	char arr[20];

	printf("Enter the File name:-");
	scanf("%s",arr);

	Display(arr);
	return 0;
}
void Display(char brr[])
{
	char drr[20];
	char temp = '\0';
	int fd = 0, iRet = 0, size = 0;

	printf("Enter the Size:-");
	scanf("%d",&size);

	fd = open(brr,O_RDONLY);

	if(fd==-1)
	{
		printf("Unable o open file:-");
		return ;
	}

	iRet = read(fd,drr,size);

	if(iRet==-1)
	{
		printf("Unable to read data:");
		close(fd);
		return ;
	}

		printf("Data suceessfully open:- %s",drr);
		close(fd);
		return ;
}
