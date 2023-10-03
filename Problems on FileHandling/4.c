#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

//accept file name from user and read first 10 bytes from that file and display a data on screen.
//design the application using functional approch. mhnje 2 function pahijet 1 main aani 1 working function.



void DisplayData(char fname[])
{
	int fd = 0, iRet = 0, size = 0, iRet2 = 0;
	char arr[20];//local array or local buffer

	printf("Enter the byte you want to read:-");
	scanf("%d",&size);

	fd = open(fname,O_RDONLY);

	if(fd==-1)
	{
		printf("Unable to open file:");
		return ;
	}

	printf("File is successfully open with fd:- %d\n",fd);

	iRet = read(fd,arr,size);

	if(iRet==-1)
	{
		printf("Unable to read the data:");
		close(fd);
		return ;
	}

	printf("Data from file is:- %s\n",arr);
//	close(fd);
	iRet2 = read(fd,arr,size);

	if(iRet2==-1)
	{
		printf("Unable to read the data:");
		close(fd);
		return ;
	}
	printf("Data is :-%s",arr);
	close(fd);
	return ;
}
int main()
{
	char name[20];

	printf("Enter File name:-");
	scanf("%s",name);

	DisplayData(name);

	return 0;
}
