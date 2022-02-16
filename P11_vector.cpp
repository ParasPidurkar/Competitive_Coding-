#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> paras;
    int arr[3];
    paras.push_back(5);
    for(auto x : paras)
    {
        cout<<x<<" ";
    }
    cout<<paras.size();
    //cout<<arr.size();   you cannot use size() on array.
    return 0;
}