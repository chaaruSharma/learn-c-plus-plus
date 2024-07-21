#include<iostream>
#include<string>
#include<algorithm>//used for usin reverse function
using namespace std;
int main(){
    string m="charu";
  
    cout<<m<<endl;
    reverse(m.begin(),m.end());//reverse function is used for recversing the string.
    cout<<m;
    return 0;}