#include<iostream>
#include<malloc.h>


using namespace std;


void check(int *arr, int ino);
int main()
{
    int no = 0;
    int *p = NULL;
    cout<< "Enter the no:-";
    cin>>no;

    p = (int*)malloc(no*sizeof(int));

    for(int i = 0; i < no; i++)
    {
        cin>>p[i];
    }

    check(p,no);
    free(p);
    return 0;
}
void check(int arr[], int ino)
{
    if(arr = NULL)
    {
        cout<< "Not Allocate:" <<endl;
    }

    int i = 0, j = 0;
    while(i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i = 0; i < ino; i++)
    {
        cout<< arr[i];
    }
}
