#include<iostream>

using namespace std;

void check(int *brr, int ino, int put);
int main()
{
    int size = 0, no = 0;
    int *p = NULL;

    cout<< "Enter the size:-";
    cin>>size;
    cout<< "Enter the no you want push:-";
    cin>>no;

    p = new int;

    for(int i = 0; i < size; i++)
    {
        cin>>p[i];
    }

    check(p,size,no);
    return 0;
}
void check(int *brr, int ino, int put)
{
    int i = 0;
    for(int i = ino+1; i > 1; i--)
    {
        brr[i] = brr[i-1];
    }

    brr[i] = put;
    
    for(int i = 0; i < ino+1; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;
}
