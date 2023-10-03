#include<iostream>
#include<bits/stdc++.h>


using namespace std;

void check(int *arr, int ino);
int mian()
{
    int *p = NULL;
    int *q = NULL;
    int size = 0;
    cout<< "Enter the size:-";
    cint>>size;

    p = new int;
    q = new int;

    if((p==NULL) || (q==NULL))
    {
        cout<< "Unable to allocate memory:-";
        return -1;
    }

    for(int i = 0; i < size; i++)
    {
        cout<< "Enter the Element1:-";
        cint>> p[i];
    }

    check(p,q,size);
    delete(p);
    return 0;
}
void check(int *arr, int *brr, int ino)
{
    if((arr == NULL) || (brr == NULL) || (ino <= 0))
    {
        return 0;
    }
    for(int i = 0; i < ino; i++)
    {
        
    }
}
