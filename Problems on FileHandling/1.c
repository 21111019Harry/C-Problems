#include<stdio.h>
#include<fcntl.h>//hi libary open function sathi ahe.
#include<unistd.h>//hi libary close function sathi ahe.
//#include<io.h>// he windows sathi aste



//accept file name from user and open that file.after opening the file successfully close that file at the end of program.

int main()
{
	char name[30];// array ghetla karn user kdun aaplyala file ch nav ghyaychy mhnun.
	int fd = 0;

	printf("Enter File Name:-");
	scanf("%s",name);

	fd = open(name,O_RDONLY);//ha call ithun kernel kde janar bcz ha system call ahe mg kernel yala ek token denar mg to sgli process krun yeanr te inode no. gheun dilb block madhe jaun mg shevti ti file jr tyach location la asel tr o/p -1 sodun 0 to ... kiti pn yeu shkto mhnje aapla program working ahe. tr yach o/p he 3 or 3 chya pudhcha no. yeil bcz 0,1,2 he tyanche reserved no. astat ith no. 0 pasun chalu zalet mhnje ha aaray ahe. he 0,1,2 he stdin,stdout,stderror sathi ahet.

	if(fd==-1)
	{
		printf("Unable to Open File:");
		return -1;
	}
	else
	{
		printf("File Open:%d",fd);
	}

	close(fd);

	return 0;
}


//ya program chya i/p madhe file ch nav dyach ashi file ki ti ya folder madhe asel jr dusrya folder madhelya file ch nav dil tr o/p Unable to open the file as yeil.
