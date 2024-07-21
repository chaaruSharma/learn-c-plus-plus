#include<iostream>
#include<string>
using namespace std;
int main(){
    string m;
    getline(cin,m);
    cout<<m<<endl;
    reverse(m.begin(),m.end());
    cout<<m;

    string s;
    // cin>>s;
    cout<<"enter string : ";
    getline(cin,s);// getline is used to fetch input with spaces.
    cout<<s<<endl;
    cout<<s.length()<<endl;
    s+=" charu";
    cout<<s<<endl;
    cout<<s.length()<<endl;
    s.append(" sharma");//append is used to merge two string from the last of the string.
    cout<<s<<endl;
    s.push_back('a');//push_back is used to add extra character in the end of the string.
    cout<<s<<endl;
    s.pop_back();//pop_back  is used to remove one character from the end of the string.
    cout<<s<<endl;
    cout<<s.length()<<endl;//use to find the length of the string.
     s.clear();//clear() used to erase the string data.
    cout<<s.size();//use to find the length of the string.

    return 0;
}