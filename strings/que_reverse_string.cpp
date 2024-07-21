#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string"<<endl;
    cin>>s;
    cout<<s<<endl;
    reverse(s.begin(),s.end()+3);
    cout<<s<<endl;
    return 0;

}