#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World";
    int arr[]={1,2,3,4,5};
    int low =0,size =(sizeof(arr)/sizeof(arr[0]))-1,high;
    high =size;
    while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high] ;
        arr[high] = temp;
        low++;
        high--;
    }
    
    for(int i =0;i<=size;i++)
    cout<<arr[i]<<" ";

    return 0;
}
