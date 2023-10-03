#include<iostream>

using namespace std;

typedef struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;

}NODE, *PNODE;

class DoublyLL
{
	private:
		PNODE Head;
		int iSize;
	public:
		DoublyLL();//constructor
		~DoublyLL();//distructor
		void DisplayF();//bheviour forward display
		void DisplayB();//bheviour backword display
		int Count();	//-//-
		void InsertFirst(int no);//-//-
		void InsertLast(int no);//-//-
		void InsertAtPos(int no,int iPos);//-//-
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int Pos);
};
DoublyLL::DoublyLL()//default constructor 
{
	Head = NULL;//ith aapn Head la null la set kel bcz aapn Head class madhe declare kela ahe aani aapn class madhe initilize nahi kru shkt aaplyala te constructure madhech initilize krav lagt mhnun aapn tyala null set kela ahe.
	iSize = 0;
}
DoublyLL::~DoublyLL()
{
	PNODE Temp = Head;

	if(Head!=NULL)//aapn aata ith purn linked list delete krtoy destructor use krun aaplyala c madhe delete kraycha chance navta bcz tith destructor hi concept navti tr ith aapn Temp use krun prtek node delete krtyo.
	{

		while(Head!=NULL)
		{
			Temp = Head;
			Head = Head -> next; 
			delete Temp;
		}
	}
}
void DoublyLL::InsertFirst(int no)//ith aadhi c madhe First ptr aani data yet hota aata First nahi yenar bcz aata aaplya hatat direct object ahe aani object madhe head and isize ahe tr aaplyala te direct miltil. aapn direct head ne sgle operation kru shkto.
{
	PNODE newN = NULL;
	newN = new NODE;//dynamic memory allocation in cpp

//	newN = (PNODE)malloc(sizeof(NODE));// cpp madhe dynamic memory allocation new ne hot pn jr te nahi klal tr aapn direct malloc pn use kru shkto bcz new he internally malloc lach call krt.

	newN -> data = no;
	newN -> next = NULL;
	newN -> prev = NULL;

	if(this->Head==NULL)//ith aapn this use kely mhnje object madhla head this keyword use kelay.
	{
		Head = newN;
	}
	else  //linked list madhe 1 jri node asla tr to ith yeil
	{
		newN -> next = Head;
		Head -> prev = newN;
		Head = newN;
	}
	iSize++;
}
void DoublyLL::DisplayF()
{
	PNODE Temp = Head;
	while(Temp!=NULL)
	{
		cout<<"|"<<Temp -> data<<"|->";
		Temp = Temp -> next;
	}
	cout<<"\n";
}
void DoublyLL::DisplayB()
{
	PNODE Temp = Head;
	while(Temp -> next!=NULL)
	{
		Temp = Temp -> next;
	}
	while(Temp != NULL)
	{
		cout<<"|"<<Temp -> data<<"|->";
		Temp = Temp -> prev;
	}
	cout<<"\n";
}
int DoublyLL::Count()
{
	return this -> iSize;//he function fkt aaplyala value dety 
}
void DoublyLL::InsertLast(int no)
{
	PNODE newN = NULL;
	PNODE Temp = NULL;
	newN = new NODE;

//	newN = (PNODE)malloc(sizeof(NODE));// he c and cpp madhe pn chalt

	newN -> data = no;
	newN -> next = NULL;
	newN -> prev = NULL;

	if(Head==NULL)//(this->Head==NULL)
	{  
		Head = newN;
	}
	else 
	{
		Temp = Head;
		
		while(Temp -> next!=NULL)	
		{
			Temp = Temp -> next;
		}
		Temp -> next = newN;
		newN -> prev = Temp;
	}
	iSize++;
}
void DoublyLL::DeleteFirst()
{
	PNODE Temp = Head;

	if(Head==NULL)
	{
		return ;
	}
	else
	{
		Head = Head -> next;
		Head -> prev = NULL;
		delete Temp;
	/*	Temp = Head;
		Head = Temp -> next;
		Head -> prev = NULL;
		delete Temp;*/
	}
	iSize--;
}
void DoublyLL::DeleteLast()
{

	if(Head==NULL)//(iSize==0)
	{
		return ;
	}
	else if(Head -> next == NULL)//(iSize==1)
	{
		delete Head;
		Head = NULL;
	}
	else  //(iSize<1)
	{
		PNODE Temp = Head;

		while(Temp -> next != NULL)
		{
			Temp = Temp -> next;
		}
		Temp -> prev -> next = NULL;
		delete Temp;
	}
	iSize--;
}
void DoublyLL::InsertAtPos(int no, int iPos)
{
	PNODE newN = NULL;
	PNODE Temp = NULL;

	if((iPos<1) || (iPos>iSize+1) || (Head==NULL))
	{
		return ;
	}
	if(iPos==1)
	{
		return InsertFirst(no);//return krtoy bcz he fun tikdun value gheun yeil aani iSize++ krun yeil aani ya fun chya khali pn iSize++ ahe mg te double iSize++ zal mhnun aapn tyala direct return kel.nahitr mg ya function madhl iSize++ he fkt else chya aat liha mhnje mg fkt else madhe yenarch fkt iSize++ kru shktil.
	}
	if(iPos==iSize+1)
	{
		return InsertLast(no);//-//-
	}
	else
	{
		Temp = Head;
		newN = new NODE;

	//	newN = (PNODE)malloc(sizeof(NODE));//he c and cpp madhe pn chalt

		newN -> data = no;
		newN -> next = NULL;
		newN -> prev = NULL;

		for(int iCnt=1;iCnt<(iPos-1);iCnt++)
		{
			Temp = Temp -> next;
		}
		newN -> next = Temp -> next;
		Temp -> next -> prev = newN; 
		newN -> prev = Temp;
		Temp -> next = newN;
	}
	iSize++;
}
void DoublyLL::DeleteAtPos(int iPos)
{
	if((iPos<1) || (iPos>iSize) || (Head==NULL))
	{
		return ;
	}
	if(iPos==1)
	{
		return DeleteFirst();
	}
	else if(iPos==iSize)
	{
		return DeleteLast();
	}
	else
	{
		PNODE Temp = Head;

		for(int iCnt=1;iCnt<(iPos-1);iCnt++)
		{
			Temp = Temp -> next;
		}
		Temp -> next = Temp -> next -> next;
		delete Temp -> next -> prev;
		Temp -> next -> prev = Temp;
	}
}

int main()
{
	DoublyLL obj1;//ith aapn static object create kela ahe
	DoublyLL dobj2;//-//-
//	DoublyLL *obj2 = new DoublyLL();//ith aapn dynamic object banvla new use krun aata ya 2nd object la haeap vr memory milali aani 1st object la stack madhe memory milali ith ya 2nd object cha fayda asa ahe ki jr aaplyala vatl ki object delete kraychay tr aapn direct delete object kru shkto pn aapn 1st object create kela ahe to aapn delete nahi kru shkt.tyacha scope samplyavr tyachi memory janar. 

	obj1.InsertFirst(21);
	obj1.InsertFirst(11);
	obj1.InsertFirst(10);

	cout<<"\nnumber of nodes:-"<<obj1.Count()<<"\n";

	obj1.DisplayF();

	obj1.InsertLast(51);
	obj1.InsertLast(61);
	obj1.InsertLast(71);
	obj1.InsertLast(81);

	obj1.DisplayF();

	cout<<"\nnumber of node:-"<<obj1.Count()<<"\n";

	obj1.DisplayB();

	obj1.DisplayF();

	obj1.DeleteFirst();

	obj1.DisplayF();

	obj1.DeleteLast();

	obj1.DisplayF();

	obj1.InsertAtPos(52,4);

	obj1.DisplayF();

	cout<<"\nNumber of nodes: "<<obj1.Count()<<"\n";

	dobj2.InsertFirst(500);
	dobj2.InsertFirst(400);
	dobj2.InsertFirst(300);
	dobj2.InsertFirst(200);
	dobj2.InsertFirst(100);

	dobj2.DisplayF();
	dobj2.DisplayB();

	cout<<"\nnumber of nodes:-"<<dobj2.Count()<<"\n";

	obj1.DeleteAtPos(5);

	obj1.DisplayF();

	obj1.DisplayB();

/*	obj2->InsertFirst(501);//he aapn dynamic object banvla hota tyache call ahet ith arrow ahe bcz to object pointer ahe.
	obj2->InsertFirst(511);
	obj2->InsertFirst(512);

	obj2->DisplayF();

	obj2->InsertLast(601);
	obj2->InsertLast(701);

	obj2->DisplayF();

	cout<<"\nnumber of nodes:-"<<obj2->Count()<<"\n";*/

	return 0;
}
