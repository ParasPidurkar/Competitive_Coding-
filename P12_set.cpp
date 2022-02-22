#include<iostream>
#include<algorithm>
using namespace std;

void main()
{

// set<int> s;
// s.insert(3);
// s.insert(2);
// s.insert(5);
// cout << s.count(3)<< "\n"; // 1
// cout << s.count(4)<< "\n"; // 0
// s.erase(3);
// s.insert(4);
// cout << s.count(3)<< "\n"; // 0
// cout << s.count(4)<< "\n"; // 1

set<int> s = {2,5,6,8};
cout << s.size() << "\n"; // 4
for (auto x : s) {
cout << x << "\n";
}
}