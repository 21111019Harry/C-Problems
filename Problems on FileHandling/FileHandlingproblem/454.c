#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int size(char *src);
int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the file name:-");
	scanf("%s",arr);

	iRet = size(arr);

	printf("%d",iRet);
	return 0;
}
int size(char *src)
{
	int fd = 0, iRet = 0;

	fd = open(src,O_RDONLY);

	if(fd==-1)
	{
		printf("Unable to open file:");
		return -1;
	}

	iRet = lseek(fd,0,SEEK_END);
	return iRet-1;//-1 kel ahe bcz o/p he 2 byte jast yet ahe.
}
