#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n,sum=0,rem;
    cout<<"enter number";
    cin>>n;
// cout<<pow(n,3);
    while(n>0){
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;
    }
    cout<<"the arm strong no is"<<" "<<sum;
    return 0;
}//solve for n= 5;