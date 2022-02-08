#include<iostream>
#include<string>
#include<stdint.h>

using namespace std;
//making the input output more efficient in code 

int main(){
    ios::sync_with_stdio(0);
cin.tie(0);

// int 32 bit 
// long long 64 bit

long long x = 123456789123456789LL;  // suffix LL means long long 
cout<<x<<"\n";

int x1 = 123456789123456789;
cout<<x1<<"\n";   // will lead to work output as this is out of bound 

int a =123456789;
long long b = a*a;
cout << b <<"\n";    //this is issue 
long long c = a ;
c= c * c;
cout<<"This is c"<< c <<"\n"; // this will give proper output

int64_t  val1  = 123456789123456789;
__int128_t val2 = 123456789123456789;
cout << val1 << "\n" ;
//cout << val2 << "\n" ;
}