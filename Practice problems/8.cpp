#include<iostream>

using namespace std;

void fibo(int ino);
int main()
{
    int no = 0;
    cout<< "Enter the no:";
    cin>>no;

    fibo(no);
    return 0;
}
void fibo(int ino)
{
    int first = 0, second = 1;

    for(int i = 0; i < ino; i++)
    {
        cout<< first <<" ";

        int third = first+second;
        first = second;
        second = third;
    }
}
