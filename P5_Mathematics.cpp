#include<iostream>
#include<string>
#include<stdint.h>

using namespace std;
//making the input output more efficient in code 

int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
int num1 =100,sum=0;
// adding all numbers till num1 traditional method 
for (int i=1;i<=num1;i++){
sum+=i;
}
cout <<sum<<"\n";


//formulae 
int res = (num1*(num1+1))/2;
cout << res <<"\n";
}