#include<iostream>
#include<string>
#include<stdint.h>

using namespace std;
//making the input output more efficient in code 

int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 //Issue with min and max is only 2 values can be compared at a time
 int min1 = min(1,2);
 cout<<min1;

 int max1 = max(1,2);
 cout<<max1;

}