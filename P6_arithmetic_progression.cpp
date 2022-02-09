#include<iostream>
#include<string>
#include<stdint.h>

using namespace std;
//making the input output more efficient in code 

int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
//let the seq be 3,7,11,15  total numbers are 4    so getting the sum of arithmetic progression
//i.e 3+7+11+15

//formulae is n(a+b)/2   a is the first term b is the last term 

int res= (4*(3+15))/2;
cout<<res<<"\n";
}