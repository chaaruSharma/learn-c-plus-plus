#include<iostream>
using namespace std;
int main(){
    int n,x,count=0;
    cout<<"enter no of elements & the no by which we have to compare the array";
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
         }
cout<<"the no of maximum no is : "<<count;
return 0;
}