#include<iostream>


using namespace std;

void transpose(int **brr, int irow, int icol);
int main()
{
    int n = 0, m = 0;
    cout<<"Enter the row:-";
    cin>>n;
    cout<<"Enter the coloum:-";
    cin>>m;

    int arr[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    transpose(arr,n,m);
    for(int i = 0; i < iRow; i++)
    {
        delete arr[i];
    }
    delete arr;

/*    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }*/
}
void transpose(int **brr, int irow, int icol)
{
    for(int i = 0; i < irow; i++)
    {
        for(int j = icol; j > 1; j--)
        {
            cout<< brr[i][j];
        }
    }
}
