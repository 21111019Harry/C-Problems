#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


void Display(char *brr);
int main()
{
	int fd = 0, iRet = 0;
	char arr[20];

	printf("Enter the File name:-");
	scanf("%s",arr);


	Display(arr);

	return 0;
}
void  Display(char *brr)
{
	int fd = 0, iRet = 0, size = 0;
	char crr[20];

	printf("Enter the size you want to display:-");
	scanf("%d",&size);

	fd = open(brr,O_RDONLY);

	if(fd==-1)
	{
		printf("Unable to open file:");
		return ;
	}

	iRet = read(fd,crr,size);

	if(iRet==-1)
	{
		printf("Unable to rad the file:");
		close(fd);
		return ;
	}

	printf("Data is:- %s",crr);
	close(fd);
	return ;
}
