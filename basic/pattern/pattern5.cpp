// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// *****
// ****
// ***
// **
// *


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}