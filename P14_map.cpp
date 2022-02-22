// C++ program to implement
// the above approach
#include<bits/stdc++.h>
using namespace std;

int main()
{

map<string,int> m;
m["monkey"] = 4;
m["banana"] = 3;
m["harpsichord"] = 9;
cout << m["banana"] << "\n"; // 3

for (auto x : m) {
cout << x.first << " " << x.second << "\n";
}
}
