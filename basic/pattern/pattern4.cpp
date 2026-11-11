
// 984. Pattern 4
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 1
// 22
// 333
// 4444
// 55555

// Print the pattern in the function given to you.


#include <iostream>
using namespace std;
int main(){
    int n,a=1;
    cin>>n;
    for(int i = 1; i < n; i++){
        for(int j = 0;j<i;j++){
            cout<<a;
        }
        cout<<endl;
        a+=1;
    }
    return 0;
}