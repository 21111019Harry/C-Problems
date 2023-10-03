#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
	int size = 0, iRet = 0, fd = 0;
	char arr[20], brr[20];

	printf("Enter the data you want to write:-");
	scanf("%s",arr);

	printf("Enter the file name:-");
	scanf("%s",brr);

	printf("Enter the size you want to write:-");
	scanf("%d",&size);

	fd = open(brr,O_WRONLY|O_APPEND);
	if(fd==-1)
	{
		printf("Unable to open file:");
		return -1;
	}
	
	iRet = write(fd,arr,size);

	if(iRet==-1)
	{
		printf("Unable to write file:");
		close(fd);
		return -1;
	}
	printf("Data successfully writen in file:- %s",brr);
	close(fd);
	return 0;
}
