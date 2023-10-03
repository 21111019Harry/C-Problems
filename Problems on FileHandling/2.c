#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


//accept file name from user and open that file in a read mode and read first 10 bytes from that file
//tr aata ith aaplyala konte system calls lagtil 1st tr open(),read(),mg close() yeil ith write nahi yenar bcz aapn 
//ith fkt read krtoy write nahi. tr ya program chya i/p file madhe aadhich data pahije bcz to data aaplyala read kraycha ahe mhnun. 

int main()
{
	char arr[20], brr[20];
	int fd = 0, iRet = 0, size = 0;

	printf("Enter file name:-");
	scanf("%s",arr);

	printf("Enter the Byte you want to Read:-");
	scanf("%d",&size);

	fd = open(arr,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open File:");
		return -1;
	}
	iRet = read(fd, brr, size);//ith fd mhnje kuthun aanaych,arr mhnje kshat anaych,10 mhnje kiti anaych as ahe.
	if(iRet<=0)//(iRet==-1) hi condi lihili tr aapn tya file madhla data display kru shkto
	{
		printf("Unable to Read:-");
		close(fd);
		return -1;
	}
	printf("Data from file is:- %s",brr); 
	close(fd);
	return 0;
}
