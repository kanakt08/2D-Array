//Write a program to print the transpose of a matrix

#include<iostream>
#include<algorithm>
using namespace std;
#define n 4
#define m 4
void transpose(int arr[n][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}
void print_transpose(int arr[n][m])
{
    transpose(arr);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[n][m]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    cout<<"original array : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"transpose array : "<<endl;
    print_transpose(arr);
}
