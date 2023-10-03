#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>//hi library memset function sathi ahe.



//accept file name from user and read hole file and display the data on screen.
//vim 4.c madhe aapn 10 byte data read krt hoto mg vim 5.c madhe aapn user jitke byte sangel titke byte read krt hoto pn aata aaplyala purn file read kraychi ahe ith ek problem ahe ki purn file chi size kshi klnar.jr size klali asti tr vim 5.c madhe ti size takun aapl kam zal ast but aata aaplyala file chi size mahiti nahi ye mhnun aapn ha question vegla ghetla ahe.mg ith while loop lagel.

#define Blocksize 10
void displayHole(char *prr);
int main()
{
	char arr[20];

	printf("Enter the file name:-");
	scanf("%s",arr);

	displayHole(arr);

	return 0;
}
void displayHole(char *prr)
{
	int fd = 0, iRet = 0;
	char arr[Blocksize];//or arr[10] bcz aapn vrti #define kely ki Blocksize jith jith asel tith 10 replace kra
	
	fd = open(prr,O_RDONLY);

	if(fd==-1)
	{
		printf("Unable to open file:");
		return ;
	}
	//ha loop jopryant iRet chi value 0 yet nahi topryant firnar ahe.
	//mhnje ith aapn ek array ghenar ki jo empty asnar aani tyala aapn data aanayla sangnar file mdhun pn aaplyala tya file chi size ch mahit nahi ahe tr aapn to array kiti size cha banvnar aata eg. jr tya file chi size 5byte ahe mg aapn aapla array 1byte cha banvaycha aani mg to array file madhe jaun 1,1 byte aant jail mg sheti to 0 aanelpn tich aapli terminating condi ahe mg to terminate honar pn aapn sgla data aanla ahe. pn to array ghyachi standard size 1024 ahe bcz aapn mage mhtlo hoto ki block size 1kb mhnje 1024 byte aste. aani data yetana 1024 chya patitch yenar ahe mhnun hi standard size ahe array chi.pn aapn ith arraychi size 10 byte ghetli ahe.aani ith aapn jo array use kela ahe to aapn prt prt use krt ahe mhnje array data aanto aani prt jatoy data aanayla tr to jevha second time jail tevha tyala clean krun pathvaycha tyamule aapn memset function use kely.
	while((iRet = read(fd,arr,Blocksize))!=0)
	{
		write(1,arr,Blocksize);//ith aapn write function la call kela ahe
		memset(arr,0,Blocksize);
	}
	close(fd);
}
//ith write chya function madhe 1 lihila ahe bcz aapn mhtlo hoto ki file system  madhe first 3byte reversed astat
// 0 ha std i/p mhnje keyboard, 1 ha std o/p mhnje terminal, 2 ha std err ha pn terminal bcz error terminal vrch display hotat.tr ith 1 ghetla ahe mhnje o/p terminal vr display kr as ahe.
//aapn bghitl ki block size 1 kb chi 1024 byte size ahe. pn he aadhi hot 2001 pryant. pn aata windows vr and linux 
//vr 1 block chi size 4 kb ahe mhnje 4096 byte ahe.
