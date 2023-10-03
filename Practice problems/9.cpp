#include<iostream>


using namespace std;

void fact(int ino);
int main()
{
    int no = 0;
    cout<< "Enter the no:-";
    cin>>no;

    fact(no);
    return 0;
}
void fact(int ino)
{
    int iMult = 1;
    for(int i = 1; i <= ino; i++)
    {
        iMult = iMult*i;
    }
    cout<<iMult<<endl;
}
