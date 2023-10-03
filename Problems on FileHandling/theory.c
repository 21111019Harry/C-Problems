				//File Handling

/*
2 type che storage astat primary and secondary jo data aaplyala program run krtana lgech lagto to primary vr asto.
aani jo data preserve kraycha asto to secondary vr asto.
aatapryant je program aapn ghetle tyanchyatla purn data preserve hot nahi ahe karn te ram madhe store hot program chalu zala ki data yeto aani program band zala ki data jato. tr mg aata aaplyala to data preverse kraycha ahe aani tyala ekch option ahe te mhnje tyala hardisk vr theva.

file is unformated uniform strem of byte.

buffer:-
buffer is a memory location in ram which contain a frequentily required data init.
buffer ram vr asto.

unformated mhnje sgl linit stream mhnje linit of byte mhnje linit sglyana 1,1 byte.
os file chya no. madhe intrested aste aani end user file chya name madhe intrested asto.

tya no la inode no. mhntat. aani file name la file name ch mhntat.
tr tya file ch no. anni name dusrya eka file madhe thevlel ast tya file la directory as mhntat. or file mhntat linux wale tyala directory mhntat windows wale tyala file mhntat.
tr te directory madhe kase store hotata
		
	     Directory
	inode no.| file name
	11       | a.txt
	12       | hello.txt
	13	 | xyz.txt
	14	 | b.txt

new hardisk aani ti clean ahe tyat kuthlach data nhiye tr os mhnte ki tumhi tumchya need nusar hardisk la format kel mhnje tumhala jsi pahije ts partiction kra.or arrangment kra
tr hardisk format krn mhnje file system tyar krn.
file system name NTFS,EXT3,EXT4,UFX,VFX,FAT
file system is a way of arranging a files in hardisk.
1 page mhnje 1kb on ram. tr 1024 byte mhnje 1kb.
hardisk che 4 part astat 1.boot block 2.super bolck 3.disk inode list block 4.data block
tr new hardisk purn clean aste mg aapn tyala file system format krn or format krn mhnje he 4 kam tyat hotat
boot bolck ha 1kb asto mhnje 1024 byte aste aani super bolck chi pn 1kb size aste pn disk inode list bolck anni data bolck chi size fix naste.
pn hi size 2001 pryantch hoti aata aapn 2019 madhe aahot aata ti size change zali ahe aata windows and linux vr 
1 block chi size 4 kb ahe mhnje 4096 byte ahe.
boot block madhe os boot krnaych logic or code lihilel ast boot mhnje. chalu keli os system boot keli mhnje os chlu keli
aani bootstrap mhnje chalu krnara 
super block ha purn hardisk chi info maintain thevto. mhnje total bolcks kiti ahet. tyanacha count
disk inode list bolck mhnje      
                               _________
                      inode    |   |   |  yachyat files baddalchi info aste aani actual file data block madhe aste
			       ---------
data block madhe purn data asto 

aapn file la double click krne aani program madhe open navachya function la call krn he same ast 

	*system calls names*                                       *libary function*
open()-file open krt							fopen()
close()-file close krt ji open keli ti					fclose()
read()-file read krt							fread()
write()-file write krt							fwrite()
creat()-new file create krt						fcreat()
lseek()-pudh mag jaych asel tr he call kra				flseek()

file manipulation aapn 2 type ne kru shkto.
1 system calls 2 libary function
system calls vs libary function.
ya 2 option cha same effect asto pn excution time badlto.
libary function internally call system calls mhnje fopen he libary function ahe fopen he internally open la call krt fopen mhnje open chya vrch wrapper.
system calls he direct kernel sobat communicate krt.aani libary function he system calls ch wrapper ahe.
every libary function calls system call internally.
//////////////##################################################/////////////////////////////////
libary function internally calls system calls and system calls interact with os and os ineract with hardware.
system calls interact with direct os and os interact with hardware.
//////////////##################################################/////////////////////////////////////
1.open:- this function accept 2 parameters.
prototype:-int open(char *path, int mode); first parameter is file name and 2 mhnje karn(reason) tr te mode ahe
open chi return valu jr -1 aali tr he failuare ahe aani jr 0 peksha mothi aali tr he success ahe.
first parameter he filecha path ahe tyat 2 type pdtat 1.absolute path 2.relative path
absolute path :- /user/data/demo.txt,  relative path :- demo.txt jr starting / ne asli tr to absolute path ahe bcz absolute path chi starting root ne hote mhnje forward slash (/) ha root asto linux madhe.aani jr starting / ne nasli tr to relative path ahe.
second parameter he O_RDONLY,O_WRONLY,O_RDWR,O_APPEND,O_TRUNC,O_CREAT......etc he sgle macro ahet he stdio.h ya header madhe astat
RD mhnje read only,WR mhnje write only,RDWR mhnje read write,APPEND mhnje filechya shevti,TRUNC mhnje filimadhla aslelea data pusun takto.
2.close();
prototype:- void close(int fd)    open chi return value aste ti close chi parameter value aste

3.read():-this function read the data from any regular file.
prototype:- int read(int fd, char *arr, int size)  ith char *arr madhe address janar mhnje aapn empty bag gheun jatoy pn to tikdun bhrun yenar, size madhe aaplyala jitke bytes read kraychet titki size yenar. tsch write cha 2nd parameter bghrun janar aani empty yenar.
4.write():-this function is use to write the contains ina any regular file.
prototype:- int write(int fd,char *arr, int size) ith pn same ahe read sarkh ahe fkt yacha 1st parameter data gheun 
jatoy.
3rd parameter ha no. gheun jatoy jevdhe aaplyala write krayche ahet tevdhe.
read(),write() madhla 1st parameter int fd ha open() function chi return value hold kraysathi ahe.

ith open(),close() function zalet tyacha use vim 1.c madhe ahe nantr mg read(),write() he function im2.c madhe ahet.

int fd=0;
fd = open(demo.txt,O_RDONLY);
ith file open zalyavr aaplya file la token milt. te token ithun pudh prtek functionch first parameter mhnun use kraych 
je inode aapn vrti bghitl te structure ahe tyat members ahet bhrpur file chya name la right click kelyavr propertiesmadhe je ast te inode madhe ast. inode madhe 

/////////////////////////####################################/////////////////////////////////
eg desktop vr 1 file ahe demo.txt navachi tya file vr aapn jr double click kel tr ti open hote mhnje sadhya ti hardisk vr ahe aapn jevha tila double click kru tevha ti hard disk vrun ram vr yeil tila boot loader ram vr gheun yeil.
os system kuthlihi gost hardisk or secondary storage vrun access krt nahi ti gost ram vr aanaylach lagte tyat sgl yet file,image or etc. os system la direct access krta yet nahi bcz os swatha primary storage vr running aste mhnje ram vr running aste. os pn aadhi hardisk vrch hoti pn jevha aapn os system boot krto tevha boot loader os la ram vr aanto.
enduser ne desktop vrchya file la double click krne mahnje prgramaticly open navachya function la call krn he same
ahe.

system calls open,close,read,write,create,lseek.
navin file banvaychi asel tr create(),asleli file ughdaychi asel tr open(),ughdleli file band kraychi asel tr 
close()data vachaycha asel tr read(),data lihayha asel tr write(),pudh mage jaych asel tr lseek().

aata aapn file kashi open hote te bghu apn jevha ekhdya file la double click kel tevha os la klal ki user file la 
open krayla bghtoy mg os tyachya 5 kamatun 1st kam krto file manegment mg file maneger ne aaplyakdun file ch nav 
ghetl aani to tya os madhlya directory madhe gela jikde 2 gosti store hotya inoad no. and file name aata aaplyala 
inoad pahije mhnun tyane te file ch nav shodhl tr te sapdl mg tyachyach bajucya cloumn madhe inode no. sapdlya mg to file maneger inode no. gheun hardisk madhya 4 part madhun 3rd part kde gela ki jo dilb(disk inode list block)ahe.

windows is written in c, mack is written in c, linux is written in c, every os is written in c.
*/
