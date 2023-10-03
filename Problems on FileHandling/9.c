#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

//accept 2 files names from user where 1st file is exsisting file and 2nd file is the file that we want to create
//and that 1st file data copy to new file.

#define Blocksize 100
void filecopy(char *src, char *dest);
int main()
{
	char arr[20], arr1[20];

	printf("Enter the file name:-");
	scanf("%s",arr);

	printf("Enter the new file name:-");
	scanf("%s",arr1);

	filecopy(arr,arr1);

	return 0;
}
void filecopy(char *src, char *dest)
{
	int fd = 0, iRet = 0, fdnew = 0;
	char arr[Blocksize];//ha local buffered ahe.

	// ata ith 1st aapn file open kraychi ji user deyil ti mnje ti brr madhe ahe mg 2nd file create kraychi src
	// madhe aani 3rd mhnje ti src madhli file copy kra brr madhe.
	// tr aadhi file open kr bcz jr aapn 1st file create keli aani tyanantr jr file opench nahi zali tr mg ti 
	// create keleli file waste jail mhnun 1st file open kr mg dusri file create kr aani jr create nahi zali 
	// error aala tr 1st open keleli file close kr.

	fd = open(src,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file:-");
		return ;
	}

	fdnew = creat(dest,0777);//ith 0 mhnje hexadecimal ahe

	if(fdnew==-1)
	{
		printf("Unable to create file:-");
		close(fd);
		return ;
	}

	while((iRet = read(fd,arr,Blocksize))!=0)
	{
		write(fdnew,arr,iRet);//ith iRet ghetla bcz array ha iRet vela write zala pahije
		memset(arr,0,Blocksize);
	}
	close(fd);
	close(fdnew);//ith aapn dest hi file close keli tichi return value fdnew ahe bcz aapn dest hi file create 
	//keli file create krn mhnjech open and read and write krn as hot mhnun aapn ith hi file close keli.
	return ;
}
