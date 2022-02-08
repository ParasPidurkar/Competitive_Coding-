#include<iostream>
#include<string>
using namespace std;
//making the input output more efficient in code 

int main(){
    ios::sync_with_stdio(0);
cin.tie(0);
//use \n instead of endl; endl causes buffer flash;


//to take the whole line as input with the spaces 

string s;
getline(cin,s);
cout<<s<<"\n";


}