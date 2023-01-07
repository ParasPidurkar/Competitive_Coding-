#include <iostream>

using namespace std;

int main()
{
int arr[]={1,2,3};
int size = sizeof(arr)/sizeof(arr[0]);

    int temp = arr[0];
    for (int i=1;i<=size;i++)
    {
        arr[i-1] = arr[i];
    }
        arr[size-1] = temp;
    
        
        for (auto X: arr)
        {
            cout<<X<<" ";
        }
        
}
