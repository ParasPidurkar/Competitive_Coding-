#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> vecObj {11, 22, 33, 44, 55, 66, 77};
    for(auto elem : vecObj) {
        cout<<elem<<", ";
    }
    cout<<endl;
    int i = 3;
    //Remove element at ith index position in vector
    vecObj.erase(vecObj.begin() + i); 
    for(auto elem : vecObj) {
        cout<<elem<<", ";
    }
    cout<<endl;
}