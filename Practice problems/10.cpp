#include<iostream>


using namespace std;

void factor(int ino);
int main()
{
    int no = 0;
    cout<< "Enter the no:";
    cin>>no;

    factor(no);
    return 0;
}
void factor(int ino)
{
    if(ino == 0)
    {
        cout<< "NOT" <<endl;
    }
    if(ino < 0)
    {
        ino = -ino;
    }
    for(int i = 1; i < ino; i++)
    {
        if((ino % i)== 0)
        {
            cout<< i;
        }
    }
    cout<<endl;
}
