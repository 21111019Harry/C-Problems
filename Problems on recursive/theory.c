/*		Recursive
		
	if we want to perform single or multipal statement repetinglingly then we use ither 
	1.itterations
	2.recursion

	in case of itteration we can use any type of loop that is for,while,do while.
	but in case of recursion their no need to use any inbulit feature of lang. bcz recursion is defined as
	"calling the functon from same function itself".
	in case of recursion we can use inbuilt data structure of os that is stack 
	every problem that we can solve using itteration can be solved using recursion.
	their are some senorieos where the concept of iteration is complicated but for the programer its easy to understand.
	in every programing lang the concept of recursion is same.
	
	in recursion main function call another function and that another function also calls itself then he returns itself and then return main means "main to->function to->again function->return function.function->return main."


	js aapn itteration madhe loop lihila aani condi chukichi takli tr to loop infinite state madhe firto.
	ts recursion madhe jr recursion nahi thambl tr stack overflow asa error yeto.
	mhnje aapn js aadhi baghitl ki kuthlahi program stack create krto mhnje aadhi main chi stack fream tyar hote  
	mg main madhe call kelelya function chi stack fream tyar hote tsch recursion madhe jevaha kuthlhi function 
	itself call krt tyala aapn recursion mahnto mg tyat pn aadhi main chi stack fream tyar hote mg function chi  
	stack fream tyar hote mg prt function swatahala call krt mg prt function chi stack fream tyar hote as chaulch 
	ast bcz aapn recursion lavl ahe mg jr he recursion thambl nahi tr multi pal stack fream tyar hotat aani stack
	overflow asa error yeto.

	(.exe file digram in ram)
	cammand line argument
		  |
		stack
		  |
	    poteintial gap
	    	  |
		data(BSS,NON-BSS)
		  |
		 Heap
		  |
		 text

NON linear data structures travels krayla recursion is easest way ahe.(tree,hashtable)
BUT linear data structures travels kray itteration is easest way ahe.(array,LL,stack,queue)

################**os madhe 3 stacks astat***###################
  1.user stack (user stack is a part of user space)
  2.kernel stack (kernel stack is a part of kernel space)
  3.iteruttp stack.
  pn aaplyala first 2ch mahit pahije users stack and kernel stack.
  1 user stack:-je aapn aatapryant kadht hoto to mhnje user stack. aadhi main chi stack fream create hote mg tyachyatlya function chi stack fream create hote mg ti delete zalyavr return main kde yete aani mg main return os kde yeto. as
  2.kernel stack:-jevha aapn system call call kru tevha tya system call krta ji stack fream tyar hoil ti kernel stack madhe jail.(open(),close(),read(),write(),lseeck()) he system calls ahet.
  user stack madhe aapn mhnje user ne create kelele function chi stack fream create hote te.(aapn kontehi fun lihto)
  aani kernel stack mhnje os ne call kelele function chi stack fream create hote te.(yaat fix system calls astat.
  open,close,create,write...)

  aapn stack chi size change kru shkto tyachi cammand ahe 
  ulimit -s yach o/p kahitri no. yeil mg aapn prt ulimit -s mg ith aaplyala ji size vatli ti takaychi.
  eg ulimit -s 
     8192
    ulimit -s 32768
    ulimit -s
     32768 as change kraychi mg tumhi tyala unlimited pn kru shkta. fkt 32768 chya jagi unlimited takaych.
#############*****Recursion type****############
1.Head Recursion:-recursion cha call jr vrti asel tr te head recursion zal.
2.Tail Recursion:-recursion cha call jr khali asel tr te tail recursion zal.(vim 1 program madhe aapn DisplayB() recursion printf cha khali lihly tr te tail recursion zal)


 interview la jr vicharl ki recursion sue kraych ki itteration use kraych tr ans sangaych ki depends ahe jr aaplyala question madhe stack sarkhya data structure use kraycha asel tr use recursion bcz recursion madhe stack inbuilt use kelela ahe nahitr use itteration.
*/
