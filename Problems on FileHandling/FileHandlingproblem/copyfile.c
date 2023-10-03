#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


#define Blocksize 100
void copyfile(char *crr, char *src);
int main()
{
	char arr[20], brr[20];

	printf("Enter the file name:-");
	scanf("%s",arr);

	printf("Enter the new file name:-");
	scanf("%s",brr);

	copyfile(arr,brr);
	return 0;
}
void copyfile(char *crr, char *src)
{
	int fd = 0, iRet = 0, fdnew = 0;
	char prr[Blocksize];

	fd = open(crr,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file:-");
		return ;
	}

	fdnew = creat(src,0777);
	if(fdnew==-1)
	{
		printf("Unable to create file:-");
		close(fd);
		return ;
	}

	while((iRet = read(fd,prr,Blocksize))!=0)
	{
		write(fdnew,prr,iRet);
		memset(prr,0,Blocksize);
	}

//	printf("File is copy :");
	close(fd);
	close(fdnew);
	return ;
}
