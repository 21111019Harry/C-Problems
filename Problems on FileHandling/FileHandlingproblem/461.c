#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

//yaat aapn getchar function use kru shkto te character by character read krt aani ek buffered io ahe te kiti pn size ghun read krt ki je aapn vim 6.c FileHandling folder madhe use kel ahe mhnje local array. getchar function he ek ek charecter read krt mhnun tyala khup vela jav yav lagt pn tech jr aapn buffered io use kel tr aapn data bulk madhe aanto mhnje yen jan kami hot.

#define Blocksize 20
int count(char *brr);
int main()
{
	int iRet = 0;
	char arr[20];

	printf("Enter the file name:-");
	scanf("%s",arr);

	iRet = count(arr);

	printf("%d",iRet);

	return 0;
}
int count(char *brr)
{
	int fd = 0, iRet = 0, iCnt = 0, i = 0;
	char prr[Blocksize];

	fd = open(brr,O_RDONLY);

	if(fd==-1)
	{
		printf("Unable to open file:-");
		return -1;
	}
	
	while((iRet = read(fd,prr,Blocksize))!=0)
	{
		for(i=0;i<iRet;i++)
		{
			if((prr[i]>='A') && (prr[i]<='Z'))
			{
				iCnt++;
			}
		}
	}
	close(fd);
	return iCnt;
}
//ith aapn same aadhi purn file kashi display kraychi tyach logic lavl mhnje while loop lavla aani fkt tyat 1 for loop lavla ki jo iRet vela firt hota iRet mhnje read function chi return value ahe ti first time tevha aapn bufferedarray pathvu to tevha bhrun yeil aani mg tya array mahdun aapn capital character find krayche as to buffered array 2,3 veles krnar mg aapn prt tsch kraych.
