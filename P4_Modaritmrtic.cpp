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

float a,b;
a=0.001;
b=0.0001;

if (abs(a-b) < 1e-9) {
cout<<"A and b has same values"<<"\n";
}
else{
    cout<<"A and B are not equal"<<"\n";
}
}