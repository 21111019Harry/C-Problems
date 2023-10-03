#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

//open Demo.txt file in write and upend mode. write "Hello" at the end of our file.
//aapn ith write ha 3 parameter ghetoy int write(int fd, char *arr, int size) ith 1st and 3rd parameter same i/p accept krtat read function sarkh fkt 2nd parameter ith bhrlelya array cha address hold krto.
//ith write function la upend kraych bcz aapn write function la sagitl ki lihun ye tr to direct tya file madhe jaun 0 pasun lihayla start krto mhnje tya fileitla aadhicha data to delete krun tyachya navin data lihito mhnun tyala upend krn imp ahe upend mhnje sheti ja mg tith lihun ye.

int main()
{
	char arr[20], brr[20];
	int no = 0, fd = 0, iRet = 0;

	printf("Enter the string you want to write:-");
	scanf("%s",brr);

	printf("Enter the file name:-");
	scanf("%s",arr);

	printf("Enter the size you want to write:-");
	scanf("%d",&no);

	fd = open(arr,O_WRONLY|O_APPEND);//bcz ith aaplyala write kraychy pn filichya sheti mhnun APPEND pn lihl ahe

	if(fd==-1)
	{
		printf("Unable to open file:-");
		return -1;
	}
	iRet = write(fd, brr, no);//write(fd,brr,strlen(brr)) as pn lihu shkto bcz strlen he function tya brr array
	//chi length kadhto aani tevdhach data write krto.

	if(iRet==-1)
	{
		printf("Unable to write file:-");
		close(fd);
		return -1;
	}

	printf("Data sucssesfully Written in File:- %s",arr);
	close(fd);
	return 0; 
}
