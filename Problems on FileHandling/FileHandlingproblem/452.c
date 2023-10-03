#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
	char arr[20];
	int iRet = 0, size = 0, fd = 0;

	printf("Enter the File name:-");
	scanf("%s",arr);

	printf("Enter the size you want read:-");
	scanf("%d",&size);

	fd = open(arr,O_RDONLY);

	if(fd==-1)
	{
		printf("Unable to open File:-");
		return -1;
	}

	iRet = read(fd, arr, size);

	if(iRet==-1)
	{
		printf("Unable to read data:-");
		close(fd);
		return -1;
	}

	printf("Data from file is:-%s",arr);
	close(fd);
	return 0;
}
