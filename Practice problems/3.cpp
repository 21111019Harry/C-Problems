#include<iostream>


using namespace std;

void check(int ino);

int main()
{
    int no = 0;
    cout<< "Enter the no:-";
    cin>> no;

    check(no);

    return 0;
}

void check(int ino)
{
    int iRev = 0;
    if(ino>0)
    {
        ino = -ino;
    }
    int temp = ino;

    while(ino != 0)
    {
        int iDigit = ino % 10;
        int iRev = (iRev*10)+iDigit;
        int ino = ino/10;
    }
    if(iRev == temp)
    {
        cout<< "YES:";
    }
    else
    {
        cout<< "NO";
    }
}
