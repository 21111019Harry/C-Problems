#include<iostream>


using namespace std;

void sparx(int **brr, int irow, int icol);
int main()
{
    int **arr = NULL;
    int iRow = 0, iCol = 0;

    cout<< "Enter the row no:-";
    cin>> iRow;
    cout<< "Enter the col no:-";
    cin>> iCol;

    arr = new (int*);

    for(int i = 0; i < iRow; i++)
    {
        arr[i] = new int;
    }

    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cin>> arr[i][j];
        }
    }
    
    sparx(arr,iRow,iCol);
    return 0;
}
void sparx(int **brr, int irow, int icol)
{
    int rem = irow*icol;
    int exp = (irow*icol)/2;
    int icnt = 0;

    for(int i = 0; i < irow; i++)
    {
        for(int j = 0; j < icol; j++)
        {
            if(brr[i][j] == 0)
            {
                icnt++;
            }
        }
    }

    if(icnt >= exp)
    {
        cout<< "YES" <<endl;
    }
    else
    {
        cout<< "NO" <<endl;
    }
}
