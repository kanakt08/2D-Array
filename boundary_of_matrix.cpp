//Write a program to print boundary elements of a matrix

#include<iostream>
using namespace std;
#define r 4
#define c 4
void print_boundary(int arr[r][c])
{
    //r=1,c=4
    if(r==1)
    {
        for(int i=0;i<c-1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    //r=4,c=1
    if(c==1)
    {
        for(int i=0;i<r-1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        for(int i=0;i<c;i++)
        {
             cout<<arr[0][i]<<" ";
        }
        for(int i=1;i<r;i++)
        {
            cout<<arr[i][c-1]<<" ";
        }
        for(int i=c-2;i>=0;i--)
        {
            cout<<arr[r-1][i]<<" ";
        }
        for(int i=r-2;i>0;i--)
        {
            cout<<arr[i][0]<<" ";
        }
    }
}

int main()
{
    int arr[r][c]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    print_boundary(arr);
}
