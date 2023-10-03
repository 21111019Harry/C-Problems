#include<iostream>
#include<bits/stdc++.h>


using namespace std;
void check(int *arr, int ino);
int main()
{
    int size = 0;
    int *p = NULL;

    cout<< "Enter the size of array:-";
    cin>>size;

    p = new int;

    for(int i = 0; i < size; i++)
    {
        cin>>p[i];
    }
    
    check(p,size);
    delete(p);
    return 0;
}
void check(int *arr, int ino)
{
    int brr[ino];

    for(int i = 0; i < ino; i++)
    {
        int iMult = 1;
        for(int j = 0; j < ino; j++)
        {
            if(i != j)
            {
                iMult = iMult*arr[j];
            }
        }
        brr[i] = iMult;
    }
    for(int i = 0; i < ino; i++)
    {
        cout<< brr[i] <<" ";
    }
    cout<<endl;
}
