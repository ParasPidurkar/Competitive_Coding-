#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> v ={3,2,6,4,1};

sort(v.begin(), v.end());
reverse(v.begin(), v.end());
random_shuffle(v.begin(), v.end());
for(int i=0;i<=4;i++)
{
    cout<<v[i]<<" ";
}
}

//for working with normal array
// sort(a, a+n);
// reverse(a, a+n);
// random_shuffle(a, a+n);

for (auto it = v.begin(); it != v.end(); it++) {
cout << *it << "\n";
}