#include<iostream>
using namespace std;
int main(){
    int n,rem,sum=0;
    cout<<"enter number";
    cin>>n;
   
    while(n>0){
    rem=n%10;
    sum=sum*10+rem;
        n=n/10;
        //  cout << "the reverse num is" << sum ;
    }
     cout << "the reverse num is" <<" " <<sum;
    return 0;
}