#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

void copy(char *crr, char *src);
int main()
{
	char arr[20], brr[20];

	printf("Enter the file name:-");
	scanf("%s",arr);

	printf("Enter the data you want to write:-");
	scanf("%s",brr);

	copy(arr,brr);

	return 0;
}
void copy(char *crr, char *src)
{
	int fd = 0, iRet = 0;

	fd = open(crr,O_WRONLY|O_APPEND);
	if(fd==-1)
	{
		printf("Unable to open file:");
		return ;
	}

	iRet = write(fd,src,strlen(src));
	if(iRet==-1)
	{
		printf("Unable to write file:");
		close(fd);
		return ;
	}

	printf("Data is write :- %s",crr);
	close(fd);
	return ;
}
