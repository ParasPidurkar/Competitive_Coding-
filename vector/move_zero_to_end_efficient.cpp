#include <iostream>

using namespace std;

int main()
{
int arr[]={1,2,3,0,4,0,5,0};
int size = sizeof(arr)/sizeof(arr[0]);
int count =0;

    for(int i=0;i<size;i++)
        {
            
            if(arr[i]!=0)
            {
                int temp ;
                temp = arr[i];
                arr[i]= arr[count];
                arr[count] = temp;
                count ++;
            }
            
        }
        
        for (auto X: arr)
        {
            cout<<X<<" ";
        }
        
}
