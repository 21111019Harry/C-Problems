#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>



//accept file name from user and display all the data of that file. after 15 offset.

#define Blocksize 100
void display(char *crr);
int main()
{
	char arr[20];

	printf("Enter the file name:-");
	scanf("%s",arr);

	display(arr);
	return 0;
}
void display(char *crr)
{
	int fd = 0, iRet = 0;
	char arr[Blocksize];

	fd = open(crr,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file:-");
		return ;
	}
	//ya function la 3 parameter lagtat 1 fd open chi return value,2 kitine pudh or kitine mag jyach,3 kuthun 
	//jaychy

	lseek(fd,15,SEEK_SET);//SEEK_SET or 0,SEEK_CUR or 1,SEEK_END or 2

	while((iRet = read(fd,arr,Blocksize))!=0)
	{
		write(1,arr,iRet);
		memset(arr,0,Blocksize);
	}
	close(fd);
	return ;
}
