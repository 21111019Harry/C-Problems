#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void check(int *brr, int ino);
int main()
{
    int *arr = NULL;
    int size = 0;

    cout<< "Enter the size:-";
    cin>> size;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }

    check(arr,size);

    delete arr;

    return 0;
}
void check(int *brr, int ino)
{
    for(int i = 0; i < ino; i++)
    {
        for(int j = i+1; j < ino; j++)
        {
            if(brr[i] == brr[j])
            {
                cout<< brr[i] <<" ";
                break;
            }
        }
    }
    cout<<endl;
}
