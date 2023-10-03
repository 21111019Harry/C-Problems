#include<iostream>


using namespace std;
void identity(int **brr, int irow, int icol);
int main()
{
    int iRow = 0, iCol = 0;
    int **arr = NULL;

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
    
    identity(arr,iRow,iCol);
    return 0;
}
void identity(int **brr, int irow, int icol)
{
    int icnt = 0;
    bool flag = true;
    for(int i = 0; (i < irow) && (flag == true); i++)
    {
        for(int j = 0; j < icol; j++)
        {
            if(i == j)
            {
                if(brr[i][j] != 1)
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if(brr[i][j] != 0)
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
