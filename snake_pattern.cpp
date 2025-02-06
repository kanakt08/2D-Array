//Write a program to print a matrix in a snake pattern

#include<iostream>
using namespace std;
#define n 4
#define m 4
void snake_pattern(int arr[n][m])
{
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for(int j=m-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main()
{
    // int n,m;

    // cout<<"enter the value of n : ";
    // cin>>n;
    // cout<<"enter the value of m : ";
    // cin>>m;

    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
     //int arr[n][m]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    snake_pattern(arr);
}
