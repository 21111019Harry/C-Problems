#include<iostream>


using namespace std;

void check(int ino);
int main()
{
    int n = 0;
    cout<< "no";
    cin>>n;

    check(n);
    return 0;
}
void check(int ino)
{
    int idigit = 0, irev = 0;
    if(ino<0)
    {
        ino = -ino;
    }
    int temp = ino;
    for(int i = 0; i < ino; i++)
    {
        while(ino!=0)
        {
            idigit = idigit%10;
            irev = irev*10+idigit;
            ino = ino/10;
        }
    }
    if(temp = irev)
    {
        cout<< "Yes" <<endl;
    }
    else
        cout<< "NO" <<endl;
}
