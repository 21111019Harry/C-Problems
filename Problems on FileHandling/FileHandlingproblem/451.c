#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
	char arr[20];
	int fd = 0;

	printf("Enter the File Name:-");
	scanf("%s",arr);

	fd = open(arr,O_RDONLY);

	if(fd==-1)
	{
		printf("Unable to Alocate File:-");
		close(fd);
		return -1;
	}

	printf("File opened successfully:");
	close(fd);
	return 0;
}
