#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


//accept file name and one string from user and write that string at the end of file.


void writedata(char *brr, char *src);
int main()
{
	char arr[20], brr[20];

	printf("Enter the file name:-");
	scanf("%s",arr);

	printf("Enter the data you want to write:-");
	scanf("%s",brr);

	writedata(arr,brr);

	return 0;
}
void writedata(char *brr, char *src)
{
	int fd = 0, iRet = 0, size = 0;

	fd = open(brr,O_WRONLY|O_APPEND);

	if(fd==-1)
	{
		printf("Unable to open file:-");
		return ;
	}

	//ith aapn open nantr write function la call kela bcz aaplyala i/p ne aalela data write kraycha ahe but 
	//aapn aadhi new array ghyacho aani tyat dtata bhraycho ki jo write kraycha ahe to tsch same aapn aata to
	//src madhe dila ahe aani write cha 2nd parameter mhnun dila ahe aani 3rd parameter strlen mhnje aapn 
	//length navachya function la call kela ahe mhnje te function aaplyala aapn dilelya string chi length 
	//deil mg aapn ti write function la pass kru.
	iRet = write(fd,src,strlen(src));

	if(iRet==-1)
	{
		printf("Unable to write file:-");
		close(fd);
		return ;
	}

	printf("Data is write in this file:- %s",brr);
	close(fd);
	return ;
}
//aapn jevha new file create krto tevha ti bydeafult read and write mode madhe ughdleli aste.
