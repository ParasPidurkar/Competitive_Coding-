#include<iostream>
#include<string>
#include<stdint.h>

using namespace std;
//making the input output more efficient in code 

int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 //let the series be 3,6,12,24 the ratio is same .This is geometric Progression

//formulae to get the sum of G.P is (b*k-a)/ (k-1)  a is the first term b is the last term  k is the common ratio

int res= ((24*2)-3)/(2-1);
cout<<res<<"\n";
}