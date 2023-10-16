#include<iostream>
using namespace std;

int countTrailingZeroes(int n){
    int res = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        res = res + n/i ;
    }
    return res;
    
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Number of zeroes present in factorial of " << n << " are " << countTrailingZeroes(n) << endl;
    return 0;
}