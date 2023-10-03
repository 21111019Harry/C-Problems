#include<iostream>

using namespace std;

void check(int **brr, int irow, int icol);
int main()
{
    int **arr = NULL;
    int iRow = 0, iCol = 0;

    cout<< "Enter the row no:-";
    cin>>iRow;
    cout<< "Enter the col no:";
    cin>>iCol;

    arr = (int**)malloc(iRow*sizeof(int*));

//    arr = new(int*);
    for(int i = 0; i < iRow; i++)
    {
        arr[i] = (int*)malloc(iCol*sizeof(int));
    //  arr[i] = new int;
    }

    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cin>>arr[i][j];
        }
    }

    check(arr,iRow,iCol);
    return 0;
}
void check(int **brr, int irow, int icol)
{
    int idigit = 0, irev = 0;
    for(int i = 0; i < irow; i++)
    {
        for(int j = 0; j < icol; j++)
        {
            int no = brr[i][j];
            irev = 0;
                while(no != 0)
                {
                    idigit = no % 10;
                    irev = (irev*10)+idigit;
                    no = no/10;
                }
                cout<< irev <<" ";
        }
        cout<<endl;
    }
}
