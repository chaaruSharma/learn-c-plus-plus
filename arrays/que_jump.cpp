//program to find the sum of positive numbers
//if the user enters a negative number break and ends the loop
//the negative number entered is not added to sum

#include<iostream>
using namespace std;

int main(){
    int number;
    int sum = 0;

    while(true){
        //take input from the user
        cout<<"enter a number";
        cin>>number;

        //break continue
        if(number<0){
            break;
        }

        //add all positive numbers
        sum +=number;
    }

    //display the sum
    cout<<"the sum is "<<sum <<endl;
   
    return 0;
}