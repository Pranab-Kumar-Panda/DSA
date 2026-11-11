// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 12345
// 1234
// 123
// 12
// 1

#include <iostream>
using namespace std;
int main(){
    int n;
    int a=0;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}