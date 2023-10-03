#include<stdio.h>
#include<malloc.h>

void check(int *arr, int ino);
int main()
{
    int size = 0;
    int *p = NULL;

    printf("Enter the size of array:-");
    scanf("%d",&size);

    p = (int*)malloc(size*sizeof(int));

    for(int i = 0; i < size; i++)
    {
        scanf("%d",&p[i]);
    }

    check(p,size);
    return 0;

/*    for(int  i = 0; i < size; i++)
    {
        printf("%d",p[i]);
    }
    printf("\n");*/
}
void check(int *arr, int ino)
{
    int max = 0, i = 0;

    for(i = 0; i < ino; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }

    }
    printf("%d",max);
    printf("\n");
}
