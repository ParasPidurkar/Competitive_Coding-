#include <iostream>

using namespace std;

void swap(int i,int j){
    int temp=0;
    temp =i;
    i=j;
    j= temp;
}

int main()
{
int arr[]={1,2,3,0,4,0,5,0};
int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++)
        {
            if(arr[i]==0)
            {
                for (int j =i+1;j<size;j++)
                {
                    if(arr[j]!=0)
                    {
                        int temp;
                        temp =arr[i];
                        arr[i]=arr[j];
                        arr[j]= temp;
                    }
                }
            }
        }
        
        for (auto X: arr)
        {
            cout<<X<<" ";
        }
        
}
