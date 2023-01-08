//Leader code 
#include <iostream>
#include<vector>
using namespace std;

int main()
{
int arr[]={5,3,2,1};
int current;
vector<int> vec;
int size = sizeof(arr)/sizeof(arr[0]);

    vec.push_back(arr[size-1]);
    current = arr[size -1];
    for (int i=size-2;i>=0;i--)
    {
       
       if(current < arr[i])
       {
        vec.push_back(arr[i]);
        current = arr[i];
       }
    }

        for (auto X: vec)
        {
            cout<<X<<" ";
        }
        
}
