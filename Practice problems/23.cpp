#include<iostream>


using namespace std;

void check(int *brr, int ino);
int main()
{
    int no = 0;
    int *p = NULL;

    cout<< "Enter the size:-";
    cin>> no;

    p = new int;

    for(int i = 0; i < no; i++)
    {
        cin>> p[i];
    }
    cout<<endl;

    check(p,no);
    return 0;
}
void check(int *brr, int ino)
{
    int min = 0, max = 0;

    for(int i = 0; i < ino; i++)
    {
        if(min == 0)
        {
            min = brr[i];
        }
        if(min > brr[i+1])
        {
            min = brr[i+1];
        }
    }
    cout<< min <<endl;
}
