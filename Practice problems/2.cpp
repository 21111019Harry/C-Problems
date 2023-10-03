#include<iostream>


using namespace std;
void perfect(int ino);
int main()
{
    int no = 0;
    cout<< "Enter the no:";
    cin>>no;

    perfect(no);
    return 0;
}
void perfect(int ino)
{
    int isum = 0;
    int p = ino;

    for(int i = 1; (i <= ino/2) && (isum < ino); i++)
    {
        if((ino % i)==0)
        {
            isum = isum + i;
        }
    }
    if(isum == p)
    {
        cout<< "YES" <<endl;
    }
    else
    {
        cout<<"NO" <<endl;
    }
}
