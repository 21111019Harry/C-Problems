#include<iostream>


using namespace std;

void check(int ino);
int main()
{
    int no = 0;
    cout<< "Enter the no:-";
    cin>>no;

    check(no);
    return 0;
}
void check(int ino)
{
    int sum = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    for(int i = 1; i <= ino/2; i++)
    {
        if((i % 2) == 0)
        {
            if((ino % i) == 0)
            {
                sum = sum + i;
            }
        }
    }
    cout<< sum <<endl;
}
