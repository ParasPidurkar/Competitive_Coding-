#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[10]={1,6,7,8,45,0,-1};
    int n;
    n= sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        if(arr[j]>arr[j+1]){
            int temp =0;
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]= temp;
        }
    }

    for (int k=0 ;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }

}