#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

//accept a file from and copy the data from that file into new created file and size user said
//mhnje 1 file ghyachi tya file madhla user sagel tevdha data ghaycha aani ek new file create krun tyat past
//kraychay.
#define Blocksize 100
void copy(char *src, char *dest, int size);
int main()
{
	char arr[20], brr[20];
	int no = 0;

	printf("Enter the file name:-");
	scanf("%s",arr);

	printf("Enter the new file name:-");
	scanf("%s",brr);

	printf("Enter the size you want to copy:-");
	scanf("%d",&no);

	copy(arr,brr,no);
	return 0;
}
void copy(char *src, char *dest, int size)
{
	int fd = 0, iRet = 0, fRet = 0;
	char prr[Blocksize];

	fd = open(src,O_RDONLY);

	if(fd==-1)
	{
		printf("Unable to open file:-");
		return ;
	}

	iRet = lseek(fd,size,SEEK_SET);//ith size mhnje tumhala kuthun read kryachy te ahe.

	fRet = creat(dest,0777);
	if(iRet==-1)
	{
		printf("Unable to create file:-");
		close(fd);
		return ;
	}

	while((iRet = read(fd,prr,Blocksize))!=0)
	{
		write(fRet,prr,iRet);
		memset(prr,0,Blocksize);
	}
	close(fd);
	close(fRet);
	return ;

}
